// contoh program Binary Search Tree untuk dicoba
//Prog 2 AVL-Tree untuk dicoba
#include <stdio.h>
#include <stdlib.h>
struct AVLTree_Node {
int data, bfactor;
struct AVLTree_Node *link[2];
};
struct AVLTree_Node *root = NULL;
struct AVLTree_Node * createNode(int data) {
struct AVLTree_Node *nodebaru;
nodebaru = (struct AVLTree_Node *)malloc(sizeof (struct AVLTree_Node));
nodebaru->data = data;
nodebaru->bfactor = 0;
nodebaru->link[0] = nodebaru->link[1] = NULL;
return nodebaru;
}
void insertion (int data) {
struct AVLTree_Node *bf, *parent_bf, *subtree, *temp;
struct AVLTree_Node *current, *parent, *nodebaru, *ptr;
int res = 0, link_dir[32], i = 0;
if (!root) {
root = createNode(data);
return;
}
bf = parent_bf = root;
/* MENCARI LOKASI UNTUK INSERT NODE BARU */
for (current = root; current != NULL; ptr = current, current = current->link[res]) {
if (data == current->data) {
printf("tidak dapat diinser duplikasi !!\n");
return;
}
res = (data > current->data) ? 1 : 0;
parent = current;
if (current->bfactor != 0) {
bf = current;
parent_bf = ptr;
i = 0;
}
link_dir[i++] = res;
}
/* membuat node baru */
nodebaru = createNode(data);
parent->link[res] = nodebaru;
res = link_dir[i = 0];
/* update keseimbangan node setelah di insert */
for (current = bf; current != nodebaru; res = link_dir[++i]) {
if (res == 0)
current->bfactor--;
else
current->bfactor++;
current = current->link[res];
}
/* sub-tree kanan */
if (bf->bfactor == 2) {
printf("bfactor = 2\n");
temp = bf->link[1];
if (temp->bfactor == 1) {
/*
* single rotation(SR) kiri
* x y
* \ / \
* y => x z
* \
* z
*/
subtree = temp;
bf->link[1] = temp->link[0];
temp->link[0] = bf;
temp->bfactor = bf->bfactor = 0;
} else {
/*
* double rotation (SR kanan + SR kiri)
* x x z
* \ \ / \
* y => z => x y
* / \ ///
* z y
*/
subtree = temp->link[0];
temp->link[0] = subtree->link[1];
subtree->link[1] = temp;
bf->link[1] = subtree->link[0];
subtree->link[0] = bf;
/* update faktor keseimbangan */
if (subtree->bfactor == -1) {
bf->bfactor = 0;
temp->bfactor = 1;
} else if (subtree->bfactor == 0) {
bf->bfactor = 0;
temp->bfactor = 0;
} else if (subtree->bfactor == 1) {
bf->bfactor = -1;
temp->bfactor = 0;
}
subtree->bfactor = 0;
}
/* sub-tree kiri*/
} else if (bf->bfactor == -2) {
temp = bf->link[0];
if (temp->bfactor == -1) {
/*
* single rotation(SR) kanan
* x y
* / / \
* y => z x
* /
* z
*/
subtree = temp;
bf->link[0] = temp->link[1];
temp->link[1] = bf;
temp->bfactor = bf->bfactor = 0;
} else {
/*
* double rotation - (SR kiri + SR kanan)
* x x z
* / / / \
* y => z => y x
* \ /
* z y
*/
subtree = temp->link[1];
temp->link[1] = subtree->link[0];
subtree->link[0] = temp;
bf->link[0] = subtree->link[1];
subtree->link[1] = bf;
/* update faktor keseimbangan */
if (subtree->bfactor == -1) {
bf->bfactor = 1;
temp->bfactor = 0;
} else if (subtree->bfactor == 0) {
bf->bfactor = 0;
temp->bfactor = 0;
} else if (subtree->bfactor == 1) {
bf->bfactor = 0;
temp->bfactor = -1;
}
subtree->bfactor = 0;
}
} else {
return;
}
if (bf == root) {
root = subtree;
return;
}
if (bf != parent_bf->link[0]) {
parent_bf->link[1] = subtree;
} else {
parent_bf->link[0] = subtree;
}
return;
}
void deletion(int data) {
int link_dir[32], res = 0, i = 0, j = 0, index = 0;
struct AVLTree_Node *ptr[32], *current, *temp, *x, *y, *z;
current = root;
if (!root) {
printf("Tree tidak ada \n");
return;
}
if ((root->data == data) && (root->link[0] == NULL)
&& (root->link[1] == NULL)) {
free(root);
root = NULL;
return;
}
/* mencari node yang mau di hapus */
while (current != NULL) {
if (current->data == data)
break;
res = data > current->data ? 1 : 0;
link_dir[i] = res;
ptr[i++] = current;
current = current->link[res];
}
if (!current) {
printf("Data tidak ada !!\n");
return;
}
index = link_dir[i - 1];
temp = current->link[1];
/* hapus node dari AVL tree - sama dan mirip hapus pada BST */
if (current->link[1] == NULL) {
if (i == 0) {
temp = current->link[0];
free(current);
root = temp;
return;
} else {
ptr[i - 1]->link[index] = current->link[0];
}
} else if (temp->link[0] == NULL) {
temp->link[0] = current->link[0];
temp->bfactor = current->bfactor;
if (i > 0) {
ptr[i-1]->link[index] = temp;
} else {
root = temp;
}
link_dir[i] = 1;
ptr[i++] = temp;
} else {
/* menghapus node dengan dua anak */
j = i++;
while (1) {
link_dir[i] = 0;
ptr[i++] = temp;
x = temp->link[0];
if (x->link[0] == NULL)
break;
temp = x;
}
x->link[0] = current->link[0];
temp->link[0] = x->link[1];
x->link[1] = current->link[1];
x->bfactor = current->bfactor;
if (j > 0) {
ptr[j - 1]->link[index] = x;
} else {
root = x;
}
link_dir[j] = 1;
ptr[j] = x;
}
free(current);
for (i = i - 1; i >= 0; i = i--) {
x = ptr[i];
if (link_dir[i] == 0) {
x->bfactor++;
if (x->bfactor == 1) {
break;
} else if (x->bfactor == 2) {
y = x->link[1];
if (y->bfactor == -1) {
/* double rotasi - (SR kanan + SR kiri) */
z = y->link[0];
y->link[0] = z->link[1];
z->link[1] = y;
x->link[1] = z->link[0];
z->link[0] = x;
/* mengupdate faktor keseimbangan */
if (z->bfactor == -1) {
x->bfactor = 0;
y->bfactor = 1;
} else if (z->bfactor == 0) {
x->bfactor = 0;
y->bfactor = 0;
} else if (z->bfactor == 1) {
x->bfactor = -1;
y->bfactor = 0;
}
z->bfactor = 0;
if (i > 0) {
index = link_dir[i - 1];
ptr[i - 1]->link[index] = z;
} else {
root = z;
}
} else {
/* single rotasi kiri */
x->link[1] = y->link[0];
y->link[0] = x;
if (i > 0) {
index = link_dir[i - 1];
ptr[i - 1]->link[index] = y;
} else {
root = y;
}
/* meng update faktor keseimbangan/balance*/
if (y->bfactor == 0) {
x->bfactor = 1;
y->bfactor = -1;
break;
} else {
x->bfactor = 0;
y->bfactor = 0;
}
}
}
} else {
x->bfactor--;
if (x->bfactor == -1) {
break;
} else if (x->bfactor == -2) {
y = x->link[0];
if (y->bfactor == 1) {
/* double rotasi - (SR kanan + SR kiri) */
z = y->link[1];
y->link[1] = z->link[0];
z->link[0] = y;
x->link[0] = z->link[1];
z->link[1] = x;
/* meng-update faktor keseimbangan / balance */
if (z->bfactor == -1) {
x->bfactor = 1;
y->bfactor = 0;
} else if (z->bfactor == 0) {
x->bfactor = 0;
y->bfactor = 0;
} else if (z->bfactor == 1) {
x->bfactor = 0;
y->bfactor = -1;
}
z->bfactor = 0;
if (i > 0) {
index = link_dir[i - 1];
ptr[i - 1]->link[index] = z;
} else {
root = z;
}
} else {
/* single rotasi kanan */
x->link[0] = y->link[1];
y->link[1] = x;
if (i <= 0) {
root = y;
} else {
index = link_dir[i - 1];
ptr[i - 1]->link[index] = y;
}
/* meng-update faktor keseimbangan / balance */
if (y->bfactor == 0) {
x->bfactor = -1;
y->bfactor = 1;
break;
} else {
x->bfactor = 0;
y->bfactor = 0;
}
}
}
}
}
}
void searchElement(int data) {
int flag = 0, res = 0;
struct AVLTree_Node *node = root;
if (!node) {
printf("AVL tree tidak ada !!\n");
return;
}
while (node != NULL) {
if (data == node->data) {
printf("%d ada pada AVL Tree\n", data);
flag = 1;
break;
}
res = data > node->data ? 1 : 0;
node = node->link[res];
}
if (!flag)
printf("Elemen yang dicari tdk ada didalam AVL tree\n");
return;
}
void inorderTraversal(struct AVLTree_Node *myNode) {
if (myNode) {
inorderTraversal(myNode->link[0]);
printf("%d ", myNode->data);
inorderTraversal(myNode->link[1]);
}
return;
}




int main() {
int key=0, ch;
while (1) {
printf("1. Sisip\insert\t2. Deletion\n");
printf("3. Cari \t4. Penelusuran\n");
printf("5. Banyak Data \t6. Exit\nMasukkan pilihan :");
scanf("%d", &ch);
switch (ch) {
case 1:
printf("Masukkan Nilai :");
scanf("%d", &key);
insertion(key);
break;
case 2:
printf("Masukkan Nilai yang akan di delete:");
scanf("%d", &key);
deletion(key);
break;
case 3:
printf("Masukkan Nilai yang akan dicari :");
scanf("%d", &key);
searchElement(key);
break;
case 4:
inorderTraversal(root);
printf("\n");
break;

case 5: //Banyak data
{
    if(key==0)
    printf("\nAntrianKosong..\n\n");
else
{
printf("\n\nBanyak data yang masuk :  %d",key);
}}
break;

case 6:
exit(0);
default:
printf("Pilihan salah!!\n");
break;
}
printf("\n");
}
return 0;
}