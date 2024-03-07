class Solution{
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i = m-1;
int j = n-1;
int k = m+n-1;

while(i>= 0 && j>=0){
if(nums1[i]>nums2[j]){
nums1[k] = nums1[i];
i--;
}
else{
nums1[k] = nums2[j];
j--;
}
k--;
}  
while (j >= 0) {
nums1[k] = nums2[j];
j--;
k--;
}

}
int main(){
int m,n;
cin>>m;
vector<int> nums1(m);
for(int i=0;i<n;i++){
int num;
cin>>num;
nums1.push_back(num);

}

cin>>n;
vector<int> nums2(n);
for(int i=0;i<n;i++){
int num;
cin>>num;
nums2.push_back(num);

}
merge(nums1,m,nums2,n);
for(int num:nums1){
cout<<num<<" ";
}
cout<<endl;
return 0;

}
};