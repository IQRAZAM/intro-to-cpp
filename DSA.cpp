// #include<iostream>
// using namespace std ;
// int main(){
//     int a =2 ;
//     int b = a+1 ;  
//     if((a=3) == b){   // value 3 is assigned to a now value of a is 3 below this code even if the codition is true or not 
//         cout<<a<<endl;
//     }else{
//         cout<<a+1 ;
//     }
//     return 0 ;
// }*/

// if else conditions 
/*#include<iostream>
using namespace std;
int main(){
 char s ;
 cout<<"enter the value of char "<<endl;
 cin>>s;
 if(s>='a' && s<='z'){
    cout<<"lower case alphabets "<<endl;
 }else if(s>='A' && s<='Z'){
    cout<<"upper case"<<endl;
 }else if (s>='0' && s<='9'){
    cout<<"positive integers" ;
 }else{
    cout<<"try again" ;
 }
return 0;
}*/

//*****************find sum of even numbers from 1 to n using while loop 
/*#include<iostream>
using namespace std;
int main(){
     int i=2 , sum = 0 ,n ;
   cout<<"enter the value of n "<<endl;
   cin>>n;
   
   while(i<make , a=n){
    if(i%2==0){
    sum = sum+i ; 
    }
    i++;
   }
   cout<<"so the sum is "<<sum<<endl;
return 0;
}*/
//*******make a square pattern asked by user using while loop 
/*#include<iostream>
using namespace std;
int main(){
  int n , i =1 ;
  cout<<"enter the number of stars you want in height "<<endl;
  cin>>n;
  while(i<=n){
    cout<<"*" ;
    int j = 1 ;
    while(j<=n){
        cout<<"*";
        j++ ;
    }
    cout<<endl;
    i++ ;
  }
return 0;
}*/
//A star pattern in exercise 
/*#include<iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        // Print left side numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print stars or spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " * " ; // Fill space with stars
        }

        // Print right side numbers
        for (int j = i; j >= 1; j--) {
            cout <<j;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}*/
//reverse of the same star pattern
 /*
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 0; i < n; i++) { // Loop for each line
        // Print left side numbers
        for (int j = 1; j <= n - i; j++) {
            cout << j; // Print numbers from 1 to (n - i)
        }

        // Print stars
        for (int j = 0; j < 2 * i; j++) {
            cout << "*"; // Print stars, 2 * i stars for each line
        }

        // Print right side numbers
        for (int j = n - i; j >= 1; j--) {
            cout << j; // Print numbers from (n - i) down to 1
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}*/
//is a prime number or not 
/*#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
bool isprime = 1;
for(int i = 2 ; i<n ;i++){
    if(n%i == 0 ){
        isprime = 0 ;
        break;
    }
}
if(isprime == 1){
    cout<<"is a prime number"<<endl;
}else{
    cout<<"not a prime number"<<endl;
}
return 0;
}*/
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 10; i++) {
//         if (i & 1) { // Check if i is odd
//             continue; // Skip the rest of the loop for odd i
//         }
//         cout << i << " is even." << endl; // This line will only execute for even i
//     }
//     return 0;
// }
////seconf max and second min for an array 
/*#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    // Input values into the array
    for (int i = 0; i < 5; i++) {
        cout << "Enter the values of the array: ";
        cin >> arr[i];
    }

    cout << "So the array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    int min = arr[0];
    
    // Find max and min
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
      int secmax = arr[0];
      int secmin = arr[5];
    // Find second max
    for (int i = 0; i < 5; i++) {
        if (arr[i] > secmax && arr[i] < max) {
            secmax = arr[i];
        }
    }

    // Find second min
    for (int i = 0; i < 5; i++) {
        if (arr[i] < secmin && arr[i] > min) {
            secmin = arr[i];
        }
    }
  cout<<"so sec in and max is "<<secmin<<secmax<<endl;
    
    return 0;
}*/
//suntract the product ans sum of digits of an integer
/*#include<iostream>
using namespace std;
int main(){
int n , r ,sum =0 ,product=1;
cout<<"enter the integer "<<endl;
cin>>n;
while(n!=0){
    r = n % 10 ;
    sum = sum + r ;
    product = product * r ;
    n = n/10 ;
}

int result = product - sum ;
cout<<"so the final result is "<<result;
return 0;
}*/
//getti g the numer od 1's in a binary number (inputting as decinal)
/*#include <iostream>
using namespace std;

int hummingWeight(uint32_t n) {
    int count = 0; // Declare count variable
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1; // Right shift n to check the next bit
    }
    return count; // Return the count of 1's
}

int main() {
    uint32_t n;
    cout << "Enter a number: ";
    cin >> n; // Input number
    int result = hummingWeight(n); // Call the function
    cout << "So the number of 1's: " << result << endl; // Output result
    return 0;
}*/
//now inputting binary number 
/*#include <iostream>
#include <string>
using namespace std;

int hummingWeight(const string& binaryStr) {
    int count = 0; // Declare count variable
    for (char bit : binaryStr) {
        if (bit == '1') {
            count++; // Increment count for each '1'
        }
    }
    return count; // Return the count of 1's
}

int main() {
    string binaryStr;
    cout << "Enter a binary number: ";
    cin >> binaryStr; // Input binary number as a string
    int result = hummingWeight(binaryStr); // Call the function
    cout << "So the number of 1's: " << result << endl; // Output result
    return 0;
}*/
//converting decimal number into binar
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n ;
cin>>n ;
int ans = 0 ;
int i = 0 ;
while(n!=0){
    int bit = n&1;
    ans = (bit * pow(10,i)+ans);
    n = n>>1;
    i++ ;
}
cout<<"so the answer is "<<ans <<endl;
return 0;
}*/
//converting negative binary number into decimal 
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
    cin >> n;
    int binary = 0;

    for(int i = 0; i < 8; i++)
    {
        int bit = n & 1;
        binary += (bit * pow(10, i));
        n = n >> 1;
    }

    cout<<binary<<endl;

return 0;
}*/
////////reversing an int but with an exception increasing thei limit of min and max 
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int ans  = 0;
int n;
cout<<"enter the number"<<endl;
cin>>n;
while(n!=0){
 int digit = n%10;
 if(ans > INT_MAX/10 || ans < INT_MIN/10 ){
    return 0;
 }
 ans = (ans*10) + digit ;
 n = n/10 ;
}
cout<<ans;
return 0;
}*/
//whenever you run your code make sure to be aware of edge case and exceptions they can make your code weak so be careful run multiple exmaples on your code to prove it right 
////////////complement of base 10 integer (given in the form of base 10 convert into binary get complement and convert that complement into base 10 )
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int m = n; 
    int mask =  0;
    if(n== 0){
        return 1;
    }
    while(m!=0){
        mask = (mask<<1) | 1;
        m = m >> 1 ;
    }
    int ans = (~n) & mask ;
    cout<<ans<<endl;
return 0;
}*/
/////////power of two (if the number is power of two then return true if not thrn false )
/*#include<iostream>
#include<cmath>
using namespace std;
bool ispoweroftwo(int n){
    for(int i = 0 ; i<= 30 ; i++){
        int ans = pow(2 , i);
        if(ans == n){
            return true;
        }
    }
    return false;
}
int main(){
    int number = 1; // You can change this to test other numbers
    if (ispoweroftwo(number)) {
        cout << number << " is a power of two." << endl;
    } else {
        cout << number << " is not a power of two." << endl;
    }
return 0;
}*/
/////////so the question is we have a certain amouont of money , and we have to divide it into bills of 10,20 ,50 and 100 for example let we have 1330 , now first we will see how many bills of 100 we need dicinf it by 100 we will get 13 now reaming is 1330 - 1300 = 30 , now checking for 50 we will get a 0 moving toeads 20 we will get a 1 with reamaing 10 and lastly again get a 1 for 10 and thats it . For solving this question we will be using a switch statement.
/*#include<iostream>
using namespace std; 
int main ()
{
    int amount;
    cout<<"Enter the Amount : "<<endl;
    cin>>amount;

    int num = 1;
    int note = 0;
    switch (num){
        case 1: {
            note = amount/100;
            amount = amount - (100 * note);
            cout<<note<<" Rs.100 note requied."<<endl;
        }
        case 2:{
            note = amount/50;
            amount = amount - (50 * note);
            cout<<note<<" Rs.50 note requied."<<endl;
        }
        case 3:{
            note = amount/20;
            amount = amount - (20 * note);
            cout<<note<<" Rs.20 note requied."<<endl;
        }
        case 4:{
            note = amount/1;
            amount = amount - (1 * note);
            cout<<note<<" Rs.1 note requied."<<endl;
        }
    }
}*/
/////////solving an nCr  programs which includes factorial and prper formula
/*#include<iostream>
using namespace std;
int factorial(int s){
    int fact = 1 ;
    for(int i = 1 ; i<=s ; i++){
        fact = fact * i ;

    }
    return fact;
}
int nCr(int n , int r){
    if(n<r){
        return 0;
    }
    int nomi = factorial (n);
    int denomi = factorial(r) * factorial(n-r);
    return nomi/denomi ;
}
int main(){
int ans = nCr(6,3);
cout<<ans<<endl;
return 0;
}
*/
//FINDING MIN AND MAX OF AN ARRAY 
/*#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,4,7,9,2,-5,3,5,2,10} ;
int  max = arr[0] ;
int min = arr[0] ;

for(int i = 0 ; i<10 ;i++){
    if(arr[i]>max){
         max = arr[i] ;
    }
    if(arr[i]<min){
        min = arr[i];
    }
}
cout<<"so the max num is "<<max<<endl;
cout<<"so the min num is "<<min<<endl;
return 0;
} */ //in case f array we give address of the array to that function so its not the ciopy of the rray its real array now if we change the array in function it will change the array in main function as well contarary to what we learned about variables 
//printing sum of an array 
/*#include<iostream>
using namespace std;
int main(){
int arr[10] = {1,4,7,9,2,-5,3,5,2,10} ;
int sum  = 0 ;
for(int i = 0 ;i < 10 ; i++){
    sum  =  arr[i] + sum ;

}
cout<<"sum of elements of array is "<<sum<<endl;
return 0;
}*/
///linear serach in arrays 
/*#include<iostream>
using namespace std;
bool search(int arr[], int size , int key){
    for(int i= 0 ; i< size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0 ;
}
int main(){
int size ;
cin>>size;
int arr[size];
int key;
cout<<"enter array elements "<<endl;
for(int i=0 ;i<size;i++){
    cin>>arr[i];
}
cout<<"enter the key yiu want to find"<<key<<endl;
cin>>key;
bool found = search(arr , size ,key );
if(found){
    cout<<key<<" is present in the array"<<endl;
}else{
    cout<<key<<" is not present in the array"<<endl;
}
return 0;
}*/
//swaping two arrays 
/*#include<iostream>
using namespace std;
void printarr(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
void reverse(int arr[], int n){
    int start = 0 ;
    int end  = n-1 ;
    while(start<=end){
    swap(arr[start] ,arr[end]);
        start ++ ;
        end--;
}
}
int main(){
int arr[6] = {3,7,1,9,3,5};
reverse(arr , 6);
printarr(arr,6);


return 0;
}*/
///swapping alternates in array 
/*#include<iostream>
using namespace std;
void printarr(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
void swapalter(int arr[], int n){
    int first = 0 ;
    int second = 1 ;
    while(second < n){
    swap(arr[first],arr[second]);
        first = first + 2;
        second = second + 2 ;
}
}
int main(){
int arr[7] = {3,7,1,9,3,5,7};
swapalter(arr , 7);
printarr(arr,7);


return 0;
}*/
//we have an array of size n where n is equal to 2m+1 so there are numbers in array that come twice like m and there is only one that comes for once and is unique we have to find tat unique number from that array and print it 
/*#include<iostream>
using namespace std;
int main(){
    int ans = 0 ;
int arr[7] = {1,4,4,3,1,3,8};
for(int i = 0 ;i< 7 ; i++){
    ans = ans ^ arr[i];

}
cout<<"so the unique element is "<<ans<<endl;
return 0;
}*/
///finding occurences of a numbers in an array that how many times they came now if they have difference occurences the ans is true like let we have an array now if 2 is repeated 3 time or have occurence of 3 4 has occurence of 1 and 7 has occurence of 2 then all of them have unique occurences so the ans will e 1 
//***********have to do it with hash map and learn it */
/*#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    // Step 1: Count occurrences of each number
    unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }

    // Step 2: Use a set to track the counts
    unordered_set<int> occurrences;
    for (const auto& pair : countMap) {
        // If the count already exists in the set, return false
        if (occurrences.find(pair.second) != occurrences.end()) {
            return false;
        }
        // Otherwise, insert the count into the set
        occurrences.insert(pair.second);
    }

    // If all counts are unique, return true
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    cout << (uniqueOccurrences(arr1) ? "true" : "false") << endl; // Output: true

    vector<int> arr2 = {1, 2};
    cout << (uniqueOccurrences(arr2) ? "true" : "false") << endl; // Output: false

    vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    cout << (uniqueOccurrences(arr3) ? "true" : "false") << endl; // Output: true

    return 0;
}*/
//getting the duplicate number in an array
/*#include<iostream>
using namespace std;
int main(){
int arr[7] = {1,2,3,4,5,6,6};
int ans = 0;
for(int i=0;i<7;i++){
    ans = ans ^ arr[i];
}
for(int i= 1 ; i< 7;i++){
    ans = ans ^ i ;
}
cout<<"so the repeated element is "<<ans ;
return 0;
}*/
////vectors in c++
//represnting vectors 
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<char> vec = {'a','D','d','f','j'};
//will be using a specific loop known as for each loop where i won't be an index it would give a value
for(char i : vec){
    cout<<i<<endl;
}
vec.push_back('k');
vec.push_back('z');
vec.push_back('p');
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
cout << "Contents of the vector: ";
    for (char& element : vec) {
        cout << element << " "; // Output each element followed by a space
    }
    cout << endl;
return 0;
}*/
//coerting decinal into binary number 
/*#include<iostream>
using namespace std;
int main(){
int num ;
cout<<"enter the numbe "<<endl;
cin>>num;
int pow = 1 ;
int ans = 0 ;
while(num!=0){
   int rem = num % 2 ;
    num =  num /2 ;
    ans =  ans + ( rem * pow);
    pow = pow * 10 ;

}
cout<<"so the number in binary is "<<ans<<endl;
return 0;
}*/
//converting from binary to decimal 
/*#include<iostream>
using namespace std;
int bintodec(int num){
    int ans = 0 , pow =1;
    while(num!=0){
        int rem = num % 10;
        num = num / 10;
        ans += rem * pow;
        pow *= 2 ;
    }
    return ans;
    
}
int main(){
cout<<bintodec(11);
return 0;
}*/
///INTERSECTION OF TWO ARRAYS 
/*#include<iostream>
using namespace std;
int main(){
int arr1[6] = {1,2,3,4,8,9};
int arr2[5] = {3,4,5,6,8};
for(int i = 0 ; i<6 ;i++){
    int ele = arr1[i];
    for(int j=0;j<5;j++){
        if(ele == arr2[j]){
            cout<<arr2[j]<<" ";
            arr2[j] = -3 ;
            break ;
        }
    }

}


return 0;
}*/
///this approach is not that optimal so we will aply two pointer approach to make it more optimized and logically easy 
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n= 10 ,m = 10 ;
    int arr1[n] = {2,3,4,4,5,6,9};
    int arr2[m] = {1,2,6,7,8}; 
int j = 0, i = 0 ;
vector<int> ans ;
while(i<n && j<m){
    if (arr1[i] == arr2[j]){
        ans.push_back(arr1[i]);
        i++;
        j++;
    }else if(arr1[i] < arr2[j]){
         i++ ;
    }else{
        j++ ;
    }
}
 // Print the ans vector
    cout << "Common elements: ";
    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
    cout << endl;
return 0;
}*/
//get a vector which contains the sum of elements in an array which are eqaul to a specific number
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int s = 6 ;
    int n= 6 ;
int arr[n] = {1,2,3,4,5,6};
vector<int> ans ;
for (int i =0 ; i <n;i++){
    for(int j = i+1 ; j < n;j++){
          if(arr[i]+arr[j] == s){
            ans.push_back(min(arr[i],arr[j]));
            ans.push_back(max(arr[i],arr[j]));
          }
    }
}
sort(ans.begin(),ans.end());
cout << "Common elements: ";
    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
    cout << endl;
return 0;
}*/
////now we have to find triplet whose sum is equal to a specific number 
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int s = 8 ;
    int n= 6 ;
int arr[n] = {1,2,3,4,5,6};
vector<int> ans ;
for (int i =0 ; i <n;i++){
    for(int j = i+1 ; j < n;j++){
        for(int k = j+1 ; k<n ; k++){
          if(arr[i]+arr[j]+arr[k] == s){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            ans.push_back(arr[k]);
            
          }
    }
}
}
//sort(ans.begin(),ans.end());
cout << "Common elements: ";
    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }
    cout << endl;
return 0;
}*/
//////sort 0 , 1 we have an array containing 0 and 1 randomly and we have to sort them to all 0 on one side and 1 on te other
/*#include<iostream>
using namespace std;

int main() {
    int arr[11] = {1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0};
    int i = 0, j = 10;

    while (i < j) {
        // Increment i until we find a 0
        while (i < j && arr[i] == 1) {
            i++;
        }
        // Decrement j until we find a 1
        while (i < j && arr[j] == 0) {
            j--;
        }
        // If i is still less than j, swap the elements
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Print the modified array
    for (int k = 0; k < 11; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}*/
//sort 0,1,2
/*#include<iostream>
using namespace std;

int main() {
    int arr[11] = {1, 0, 2, 1, 0, 2, 0, 1, 2, 0, 1};
    int n = 11;

    int low = 0, mid = 0, high = n -1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/
////BINARY SERACH 
/*#include <iostream>
using namespace std;

void findkey(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1; // Corrected the end index

    while (start <= end) {
        int mid = start + (end - start) / 2; // Corrected the mid calculation

        if (key == arr[mid]) {
            cout << "Found the key on index " << mid << endl;
            return;
        } else if (key < arr[mid]) {
            end = mid - 1; // Corrected the end update
        } else {
            start = mid + 1; // Corrected the start update
        }
    }

    cout << "Key not found" << endl;
}

int main() {
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 2;
    findkey(arr, n, key);
    return 0;
}*/
///find the left most and w=right most occurnec of an element in an  array(my solution )
/*nclude<iostream>
using namespace std;
int main(){
int arr[13] = {0, 0, 1, 1, 2, 2, 2, 2, 2, 7, 8, 9, 9};
    int k = 2;
    int firstIndex = -1;
    int lastIndex = -1;
    for(int i= 0 ; i< 13 ;i++){
        if (arr[i] == k){
            if(firstIndex == -1){
                firstIndex = i ;
            }
            lastIndex = i ;
        }
    }
    if (firstIndex != -1) {
        cout << "First occurrence of " << k << " is at index " << firstIndex << endl;
        cout << "Last occurrence of " << k << " is at index " << lastIndex << endl;
    } else {
        cout << "Element " << k << " not found in the array." << endl;
    }
return 0;
}*/
////same question in term of binary serach 
/*clude <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int n, int key) {
    int s = 0, e = n - 1; // Initialize e to n - 1
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            ans = mid; // Store the index
            e = mid - 1; // Search in the left half
        } else if (key > arr[mid]) {
            s = mid + 1; // Search in the right half
        } else {
            e = mid - 1; // Search in the left half
        }
    }
    return ans; // Return the first occurrence
}

int lastOcc(vector<int> arr, int n, int key) {
    int s = 0, e = n - 1; // Initialize e to n - 1
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate mid inside the loop
        if (arr[mid] == key) {
            ans = mid; // Store the index
            s = mid + 1; // Search in the right half
        } else if (key > arr[mid]) {
            s = mid + 1; // Search in the right half
        } else {
            e = mid - 1; // Search in the left half
        }
    }
    return ans; // Return the last occurrence
}

pair<int, int> searchRange(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p; // Return the pair of first and last occurrences
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2, 2, 7, 8, 9, 9};
    int n = arr.size();
    int k = 2;
    pair<int, int> result = searchRange(arr, n, k);
    cout << "First occurrence: " << result.first << ", Last occurrence: " << result.second << endl;
    return 0;
}*/
/////[PEAK ELEMENT IN A MUNTAIN ARRAY IN WHICH ONE NUMBER ID GREATER THAN EVERY OTHER NUMBER IN AN ARRAY AND IN A GRAPH IN MAKE A MOUNTAIN TYOE SHAPE 
/*#include<iostream>
using namespace std;
int findpeak(int arr[] , int n){
    int s = 0 , e = n-1 ;
    int mid =  s+(e-s)/2 ;
    while(s<=e){
        for(int i = 0; i< n ; i++){
        if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1]){
            cout<<"so the peak element is "<<arr[mid]<<endl;
            return 0 ;
        }else if(arr[mid]<arr[mid-1]){
            e = mid -1 ;
        }else {
            s = mid + 1 ;
        }
        mid = s + (e-s)/2 ;
        }
    }
}
int main(){
int arr[10] = {1,3,9,10 ,3,2};
findpeak(arr, 10); 
return 0;
}*/
////ANOTHER WAY TO GET THE PIVOT INDEX IS BY USING ROTATED ARRAY AND SEEING THE SHORTEST OR WITHIN A GRAPH WHICH ONE IS AT LOWEST WOULD BE OUR IVOT ELEMENT 

/*#include<iostream>
using namespace std;

    int pivotIndex(vector<int>& arr, int n) {
        int s = 0, e = n - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] > arr[e]) {
                s = mid + 1; // Pivot is in the right half
            } else {
                e = mid; // Pivot is in the left half
            }
        }
        return s; // s is the index of the smallest element
    }
int main(){
    int n = 5 ;
    int arr[n] = {8,10,17,1,3};
cout<<"pivot is "<<pivotIndex( arr , n);
return 0;
}*/

///FINDING SQURE ROOT USING BINARY SERACH with only int form
/*#include<iostream>
using namespace std;
int sqrtbinary(int n){
    int s = 0; 
    int e  = n ;
    long long int mid = s + ( e-s)/2 ;
    long long ans  = -1 ;
    while(s<=e){
        long long square = mid * mid ;
        if(square == n ){
            return mid ;
        }
        if(square < n){
            ans = mid ;
            s = mid +1 ;
        }else{
            e = mid -1 ;
        }
        mid = s+(e-s)/2 ;
    } 
    return ans ;
    
}
int main(){
 cout<< sqrtbinary(36)<<endl;
 cout<< sqrtbinary(45)<<endl;
 cout<< sqrtbinary(49)<<endl;
 cout<< sqrtbinary(890)<<endl;
return 0;
}*/
//adidng more precision to decinal points 

/*#include <iostream>
using namespace std;

int sqrtbinary(int n) {
    int s = 0; 
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long ans = -1;

    while (s <= e) {
        long long square = mid * mid;
        if (square == n) {
            return mid; // Exact square root found
        }
        if (square < n) {
            ans = mid; // Update ans to the current mid
            s = mid + 1; // Move to the right half
        } else {
            e = mid - 1; // Move to the left half
        }
        mid = s + (e - s) / 2; // Update mid
    }
    return ans; // Return the floor of the square root
}

double precision(int n, int pre, double tempsol) { // Change tempsol to double
    double factor = 1;
    double ans = tempsol;

    // Loop for the number of decimal places
    for (int i = 0; i < pre; i++) {
        factor = factor / 10; // Decrease factor for precision
        // Start from the last known answer and increment
        for (double j = ans; j * j <= n; j += factor) { // Change < to <=
            ans = j; // Update ans to the current j
        }
    }
    return ans; // Return the final answer
}

int main() {
    cout << "Square root of 36: " << sqrtbinary(36) << endl;
    cout << "Square root of 45: " << sqrtbinary(45) << endl;
    cout << "Square root of 49: " << sqrtbinary(49) << endl;
    cout << "Square root of 890: " << sqrtbinary(890) << endl;

    double tempsol = sqrtbinary(36); // Change to double
    cout << "So the more precise answer is: " << precision(36, 3, tempsol) << endl;

    return 0;
}
*/
///book allocation problem
/*#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    if (m > n) return -1; // More students than books

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid; // Found a possible solution
            e = mid - 1; // Try for a better (smaller) solution
        } else {
            s = mid + 1; // Increase the limit
        }
    }
    return ans;
}

int main() {
    vector<int> books = {10, 20, 30 , 40}; // Example book pages
    int students = 2; // Number of students
    int n = books.size();

    int result = allocateBooks(books, n, students);
    if (result != -1) {
        cout << "Minimum number of pages: " << result << endl;
    } else {
        cout << "Not enough books for the students." << endl;
    }

    return 0;
}*/

////aggressive cow problme using binary search
/*#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    int cowCount = 1; // Start with one cow placed
    int lastPos = stalls[0]; // Place the first cow in the first stall

    for (int i = 1; i < n; i++) { // Start from the second stall
        if (stalls[i] - lastPos >= mid) { // Check if the distance is at least 'mid'
            cowCount++; // Place a cow
            lastPos = stalls[i]; // Update the last position of the cow
            if (cowCount == k) { // If all cows are placed
                return true;
            }
        }
    }
    return false; // Not possible to place all cows with at least 'mid' distance
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end()); // Sort the stalls
    int s = 0; // Minimum possible distance
    int n = stalls.size();
    int e = stalls[n - 1] - stalls[0]; // Maximum possible distance
    int ans = -1; // To store the answer
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2; // Calculate mid distance

        if (isPossible(stalls, k, mid, n)) { // Check if it's possible to place cows
            ans = mid; // Update answer
            s = mid + 1; // Try for a larger distance
        } else {
            e = mid - 1; // Try for a smaller distance
        }
    }
    return ans; // Return the maximum minimum distance
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9}; // Example stall positions
    int k = 3; // Number of cows

    int result = aggressiveCows(stalls, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
*/
/////SELECTION SORT OF AN ARRAY 
/*#include<iostream>
using namespace std;
int main(){
int arr[5] = {4,5,2,1,0};
for(int i = 0 ; i<4 ; i++){
    int minindex = i ;
    for(int j = i+1 ; j< 5; j++){
        if(arr[j]<minindex){
            minindex = j ;
        }
    }
    swap(arr[minindex] , arr[i]);
}

return 0;
}*/
///BUBLE SORT IN ARRAYS 
/*#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>& arr , int n){
    for(int i = 0 ; i< n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
vector<int> arr = {1,4,7,2,3,2,1,5,0,9,8};
bubblesort(arr ,arr.size());
cout << "Vector elements: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;
}*/
//insertion sort 
/*#include<iostream>
#include<vector>
using namespace std;
void insertsort(vector<int>& arr , int n){
    for(int i = 1 ; i< n ; i++){
        int temp = arr[i];
        int j = i-1 ;
        for(; j >= 0 ; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp ;
    }
}
int main(){
vector<int> arr = {1,1,0,4,1,8,5};
insertsort(arr ,arr.size());
cout << "Vector elements: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;
}*/
///merging arrays 
/*#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[6] = {1, 4, 5, 8, 9, 2};
    int arr2[3] = {2, 6, 7};
    int arr3[9]; // Array to hold the merged result
    int i = 0, j = 0, k = 0;

    // Print original arrays
    cout << "Array 1: ";
    printArray(arr1, 6);
    cout << "Array 2: ";
    printArray(arr2, 3);

    // Merging the two arrays
    while (i < 6 && j < 3) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < 6) {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < 3) {
        arr3[k++] = arr2[j++];
    }

    // Print merged array
    cout << "Merged Array: ";
    printArray(arr3, k); // k is the size of the merged array

    return 0;
}*/
/////SUM OF TWO ARRAYS 
/*#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a vector
vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    while (s < e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

// Function to find the sum of two arrays representing numbers
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    vector<int> ans;
    int mul = 1, res1 = 0, res2 = 0;

    // Calculate the number represented by array a
    for (int i = n - 1; i >= 0; i--) {
        res1 = res1 + (a[i] * mul);
        mul = mul * 10; // Update multiplier
    }

    mul = 1; // Reset multiplier for the second array
    // Calculate the number represented by array b
    for (int i = m - 1; i >= 0; i--) {
        res2 = res2 + (b[i] * mul);
        mul = mul * 10; // Update multiplier
    }

    // Calculate the total sum
    int total = res1 + res2;

    // Extract digits of the total sum and store in ans
    while (total > 0) {
        int ele = total % 10;
        ans.push_back(ele);
        total = total / 10;
    }

    // Reverse the ans vector to get the correct order
    return reverse(ans);
}

// Function to print the vector
void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function to demonstrate the functionality
int main() {
    vector<int> a = {2, 4, 3}; // Represents the number 342
    vector<int> b = {5, 6, 4}; // Represents the number 465

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    cout << "Sum of the two arrays is: ";
    printVector(result); // Output should represent the number 807

    return 0;
}*/
///max occurence of a charater in a string 
/*#include <iostream>
using namespace std;

char getmax(string s) {
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') { // Check if the character is a lowercase letter
            int number = ch - 'a';
            arr[number]++;
        }
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main() {
    string st = "well";
    cout << getmax(st); // Corrected output statement
    return 0;
}*/


//replaces spaces in a string with "$40"
/*#include<iostream>
using namespace std;
string replacestring(string &str){
    string temp = "" ;
    for(int i =0 ; i< str.length();i++){
        if(str[i] == ' '){
           temp.push_back('$'); 
           temp.push_back('4'); 
           temp.push_back('0'); 
        }else{
            temp.push_back(str[i]);
        }
    }
    return temp ;
}
int main(){
string s = "why not meri jan ";
cout<<(replacestring(s));
return 0;
}*/

//remove all occurences of a substring 
/*#include<iostream>
using namespace std;
string replaceOcc(string s , string part){
    while(s.length()!= 0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length()) ;
    }
    return s;
}
int main(){
string s = "abcbabbabababcbdbbajkosjabc" ;
string p = "abc";
cout<<(replaceOcc(s,p));
return 0;
}*/
//rempving duplicates from a string 
/*#include <iostream>
#include <unordered_set>
using namespace std;
string removeDuplicates(string s) {
    unordered_set<char> seen;
    string result;
    
    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }
    
    return result;
}
int main() {
    string input = "hello world";
    cout << "Original: " << input << endl;
    cout << "After removing duplicates: " << removeDuplicates(input) << endl;
    return 0;
}*/

//2d arrays simple finding target 
/*#include<iostream>
using namespace std;
bool find(int arr[][4] , int target , int rows , int cols){
    for(int i= 0 ; i<rows ; i++){
        for(int j = 0 ; j <cols ;j++){
            if(arr[i][j] == target){
                return true ;
            }   
        }
    }
    return false;
}
int main(){
    int rows =3 ,cols = 4 ;
int array[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
int target = 17 ;
if(find(array ,target , rows , cols )==true){
    cout<<"so the target is present in array"<<endl;
}else{
    cout<<"target is not found"<<endl;
}
return 0;
}*/
//finding sum of rows 
/*#include<iostream>
#include<vector>
using namespace std;
int sum(int arr[][4]  , int rows , int cols){
    for(int i= 0 ; i<rows ; i++){
        int sum = 0 ; 
        for(int j = 0 ; j <cols ;j++){
            sum += arr[i][j];
        }
        cout<<"sum of row "<<i<<" is "<<sum<<endl;
    }

    
}
int largestRowSum(int arr[][4]  , int rows , int cols){
    int maxi = INT8_MIN ;
    int rowIndex = -1 ;
    for(int i= 0 ; i<rows ; i++){
        int sum = 0 ; 
        for(int j = 0 ; j <cols ;j++){
            sum += arr[i][j];
        }
        cout<<"sum of row "<<i<<" is "<<sum<<endl;
        if(sum > maxi){
            maxi = sum ;
            rowIndex = i ; 
        }
    }
    cout<<"so the maximum sum in the rows is "<<maxi <<" at index "<<rowIndex<<endl;
}*/
//showing vector in waves 
/*#include <iostream>
#include <vector>

using namespace std;

// Function to return the wave form of a 2D vector
vector<int> wave(const vector<vector<int>>& arr, int rows, int cols) {
    vector<int> ans; // Vector to store the result

    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) { // Even column: top to bottom
            for (int i = 0; i < rows; i++) {
                ans.push_back(arr[i][j]);
            }
        } else { // Odd column: bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                ans.push_back(arr[i][j]);
            }
        }
    }

    return ans; // Return the result vector
}

int main() {
    int rows = 3, cols = 4;
    // Initialize a 2D vector
    vector<vector<int>> array = {
        {1, 29, 36, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Get the wave form
    vector<int> result = wave(array, rows, cols);

    // Print the result
    cout << "Wave form: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}*/
///spiral moveement 
/*
#include <iostream>
#include <vector>
using namespace std;

void printSpiral(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Print the top row
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Print the right column
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            // Print the bottom row
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            // Print the left column
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

   cout << "Spiral order of the matrix is: ";
    printSpiral(matrix);
    cout <<endl;

    return 0;
}*/
///SIMPLE TRANPOSE OF A MATRIX 
//(if we want to swao the same matrix without making another temp so we have to amke sure that it is square )
/*#include <iostream>
#include <vector>
using namespace std;

// Function to transpose the matrix in place
void transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) { // Start from j = i + 1 to avoid double swapping
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    transpose(matrix); // In-place transpose

    cout << "Transposed Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
*/
//rotating 90 degree 
/*#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

void transposeInPlace(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i =  0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]); // Swap elements diagonally
        }
    }
}

// Function to rotate rows LEFT (shift elements to the left)
void rotateRowsLeft(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        int first = mat[i][0];
        for (int j = 0; j < n - 1; j++) {
            mat[i][j] = mat[i][j + 1]; // Shift left
        }
        mat[i][n - 1] = first;
    }
}

// Function to rotate rows RIGHT (shift elements to the right)
void rotateRowsRight(vector<vector<int>>& mat) {
    int n = mat.size();
    for (int i = 0; i < n; i++) {
        int last = mat[i][n - 1];
        for (int j = n - 1; j > 0; j--) {
            mat[i][j] = mat[i][j - 1]; // Shift right
        }
        mat[i][0] = last;
    }
}

// Function to REVERSE all rows
void reverseAllRows(vector<vector<int>>& mat) {
    for (auto& row : mat) {
        reverse(row.begin(), row.end()); // Using STL reverse
    }
}

void printMatrix(const vector<vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int num : row) cout << num << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat = { {1, 2, 3}, 
                                {4, 5, 6}, 
                                {7, 8, 9} };

    cout << "Original Matrix:" << endl;
    printMatrix(mat);

    transposeInPlace(mat);
    cout << "\nAfter Transpose:" << endl;
    printMatrix(mat);

    rotateRowsLeft(mat);
    cout << "\nAfter Left Rotation:" << endl;
    printMatrix(mat);

    // Uncomment to test other rotations:
     rotateRowsRight(mat);
     cout << "\nAfter right Rotation:" << endl;
    printMatrix(mat);
     reverseAllRows(mat);
     cout << "\nAfter reversing all rows :" << endl;
    printMatrix(mat);

    return 0;
}*/
/*#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Step 1: Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]); // Swap elements
            }
        }
        
        // Step 2: Reverse each row
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end()); // Reverse the row
        }
    }
    
    // Function to print the matrix (for testing purposes)
    void printMatrix(const vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Original Matrix 1:" << endl;
    solution.printMatrix(matrix1);
    solution.rotate(matrix1);
    cout << "Rotated Matrix 1:" << endl;
    solution.printMatrix(matrix1);

    

    return 0;
}*/
///SEARCHING IN A mxn MATRIX 
/*#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    if (row == 0) return false; // Handle empty matrix
    int col = matrix[0].size();
    int start = 0;
    int end = row * col - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int element = matrix[mid / col][mid % col];
        
        if (element == target) {
            return true; // Found the target
        }
        if (element < target) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return false; // Target not found
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        {61, 66, 85, 90}
    };

    cout << "Matrix:" << endl;
    printMatrix(matrix);

    int target = 3;
    if (searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    target = 13; // Example of a target not in the matrix
    if (searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}*/
/////modular exponentail
/*#include<iostream>
using namespace std;
int modexp(int x , int n , int m){
    int res = 1 ;
    while(n!=0){
        if(n&1){
            res = (1LL * (res) * (x)%m)%m ;
        }
        x = (1LL * (x)%m * (x)%m)%m ;
        n = n>>1 ;
    }
    return res ;
}
int main(){
int result = modexp(3,7,3);
cout<<result;
return 0;
}*/
//DYNAMIC MEMORY ALLOCATION IN 2D ARRAYS 
/*#include<iostream>
using namespace std;
int main(){
    int row ;
    cin>>row;
    int col;
    cin>>col ;
//creating a 2d arrays
int** arr = new int*[row];
for(int i=0 ; i< row ;i++){
 arr[i]  =  new int[col];
}
//taking input
for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j< col ; j++){
        cin>>arr[i][j];
    }
}
//getting output
for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j< col ; j++){
        cout<<arr[i][j]<< " ";
    }
    cout<<endl ;
}
//deletig memeory 
for(int i=0 ; i< row ;i++){
 delete []arr[i];
}
delete []arr ;
return 0;
}*/

/////A jagged array, also known as a ragged array, is an array of arrays where the subarrays can have different lengths. In C and C++, you can create a jagged array dynamically using pointers and dynamic memory allocation functions like malloc() or new.
// recurssion functions 
/*#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1 ;
    }
    int result = n * factorial(n-1);
    return result ;
}
int main(){
int number;
cin>>number ;
cout<<"so the factorial of "<<number<< " is "<<factorial(number)<<endl;
return 0;
}
*/
//////say digits 
/*#include<iostream>
using namespace std;
void sayDigits(int n,string arr[]){
    if(n==0){
        return ;
    }
    int digit = n% 10 ;
    n = n/10 ;
    sayDigits(n , arr);
    cout<<arr[digit]<<" ";
}
int main(){
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int number;
cin>>number;
sayDigits(number , arr);
return 0;
}*/
//getting sum elements of arrays using recusrssion 
/*#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remains = sum(arr+1,size-1);
    int ans = arr[0]+ remains ;
    return ans ;
    
}
int main(){
int arr[4] = {1,2,15,2};
int size = 4 ;
cout<<"so the ans is "<<sum(arr,size);
return 0;
}*/
////BINARY SEARCH USING RECURSSION 
/*#include<iostream>
using namespace std;
bool binSe(int arr[],int s, int e ,int k){
    if(s>e){
        return false ;
    }
    int mid = s + (e-s)/2 ;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binSe(arr,mid+1,e,k);
    }else{
        return binSe(arr,s,mid-1,k);
    }
}
int main(){
int arr[7] = {1,2,3,4,5,6,7};
int key = 22;
cout<<"found or not "<<binSe(arr,0,6,key)<<endl;
return 0;
}*/

//reversing string using recusrssion 
/*#include<iostream>
using namespace std;
string recur(string str ,int s , int e){
    cout<<"call receuved for "<<str<<endl;
    if(s>e){
        return str ;
    }
    swap(str[s],str[e]);
    s++ ;
    e-- ;
    return recur(str,s,e);
}
int main(){
 string spa = "spark" ;
 cout<<recur(spa,0,spa.length()-1);
return 0;
}*/
///finding palindrome using recurssion 
/*#include<iostream>
using namespace std;
bool recurpal(string str ,int s , int e){
    if(s>e){
        return true ;
    }
    if(str[s]!=str[e]){
        return false ;
    }else{
       recurpal(str,s+1,e-1);
    }
}
int main(){
 string spa = "aabbaa" ;
 bool ispal = recurpal(spa,0,spa.length()-1);
 if(ispal){
    cout<<"is a palindrome "<<endl;
 }else{
    cout<<"is not palindeore "<<endl;
 }
return 0;
}*/
//gettig power using recurssion 
/*#include<iostream>
using namespace std;
int power(int a , int b){
    if (b==0){
        return 1 ;
    }
    if(b==1){
        return a;
    }
    int ans = power(a,b/2);
    if(b%2==0){
        return ans * ans ;
    }else{
        return a *(ans *ans);
    }

}
int main(){
int num1 , num2 ;
cout<<"enter number and its power"<<endl;
cin>>num1;
cin>>num2;
cout<<power(num1, num2);
return 0;
}*/
////bubble sort using recurssion 
/*#include<iostream>
using namespace std;
int sortArray(int* arr,int n){
    if(n==0 | n==1){
        return 0 ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]) ;
        }
    }
    sortArray(arr,n-1);
}
int main(){
int array[6] = {4,6,1,8,3,9};
sortArray(array,6);
for(int i = 0;i<6;i++){
   cout<<array[i]<< " " ;
}
return 0;
}*/

//fastest algo merge sort using recurssion 
/*#include <iostream>
using namespace std;

void merge(int* arr, int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    // Copy values to the temporary arrays
    for (int i = 0; i < len1; i++) {
        first[i] = arr[s + i];
    }
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i];
    }

    // Merge the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first array, if any
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy remaining elements of second array, if any
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free the dynamically allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(int* arr, int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    // Sorting left part
    mergeSort(arr, s, mid);
    // Sorting right part
    mergeSort(arr, mid + 1, e);
    // Merge
    merge(arr, s, mid, e);
}

int main() {
    int array[] = {4, 61, 12, 8, 33, 93, 41, 82, 9, 510, 100};
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array
    mergeSort(array, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    return 0;
}*/
//inversion count mechanism with 0(nlogn) time complexity 
/*#include <iostream>
using namespace std;

// Function to merge two halves and count inversions
int mergeAndCount(int* arr, int s, int mid, int e) {
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    // Copy data to temporary arrays
    for (int i = 0; i < len1; i++)
        left[i] = arr[s + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = s;
    int invCount = 0;

    // Merge the two halves and count inversions
    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            // There are mid - i inversions, because all remaining elements in left[] (left[i], left[i+1], ..., left[len1-1])
            // are greater than right[j]
            arr[k++] = right[j++];
            invCount += (len1 - i);
        }
    }

    // Copy remaining elements of left[]
    while (i < len1) {
        arr[k++] = left[i++];
    }

    // Copy remaining elements of right[]
    while (j < len2) {
        arr[k++] = right[j++];
    }

    // Free the dynamically allocated memory
    delete[] left;
    delete[] right;

    return invCount;
}

// Function to use merge sort and count inversions
int mergeSortAndCount(int* arr, int s, int e) {
    int invCount = 0;
    if (s < e) {
        int mid = (s + e) / 2;

        // Count inversions in left half
        invCount += mergeSortAndCount(arr, s, mid);
        // Count inversions in right half
        invCount += mergeSortAndCount(arr, mid + 1, e);
        // Count inversions while merging
        invCount += mergeAndCount(arr, s, mid, e);
    }
    return invCount;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int inversionCount = mergeSortAndCount(arr, 0, size - 1);
    cout << "Number of inversions: " << inversionCount << endl;
    return 0;
}
*/
///quick sprt using recurssion (first partition and then using ecurssion )
/*#include<iostream>
using namespace std;
int partition(int arr[],int s, int e){
    int pivot = arr[s];
    int count = 0 ;
    for(int i=s+1 ; i<=e ;i++){
    if(arr[i]<=pivot){
        count++ ;
    }
    }
    //placing pivot at right postion
    int pivotIndex = s+count; 
    swap(arr[pivotIndex],arr[s]);
    //working on left and right part
    int i = s ;
    int j = e ;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++ ;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s, int e){
    if(s>=e){
        return ;
    }
    int p = partition(arr,s,e);
    //left sorting 
    quickSort( arr, s, p-1);
    //right part
    quickSort( arr, p+1,e);
}

int main(){
int array[] = {4, 61, 12, 8, 33, 93, 41};
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array
    quickSort(array, 0, size - 1);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
return 0;
}*/
///permutation in strings using recurssion 
/*#include<iostream>
#include<vector>
using namespace std;
class Solution {
    private:
    void solve(vector<int> nums ,int index,vector<vector<int>>& ans ){
        //basecase
        if(index>=nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int j = index ;j<nums.size();j++){
            swap(nums[index],nums[j]);
        solve(nums,index+1 ,ans);
         //backtrack
         swap(nums[index],nums[j]);
         
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
         vector<int> output ;
        solve(nums,index ,ans);
        return ans ;
    }
};
int main(){
     Solution solution;
    vector<int> nums = {1, 2, 3}; // Sample input
    vector<vector<int>> permutations = solution.permute(nums);
    // Print the permutations
    cout << "Permutations of the array are:\n";
    for (const auto& perm : permutations) {
        cout << "[ ";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}*/
//rat in the ,aze problem 
/*#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    vector<string> findPath(vector<vector<int>>& m , int n){
            vector<string> ans ;
            if(m[0][0]==0){
                return ans ;
            }
            int srcx = 0;
            int srcy = 0 ;
            vector<vector<int>> visited  = m  ;
            //initialize with 0 
            for(int i = 0 ;i<n;i++){
                for(int j = 0 ;j<n ; j++){
                    visited[i][j] = 0  ;
                }
            }  
            string path = "" ;
            solve(m , n , ans,srcx,scry,visited,path);
            sort(ans.begin(),ans.end());
            return ans ;   
    }

};
int main(){

return 0;
}*/
///rat problem 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Helper function to solve the maze recursively
void solve(int i, int j, vector<vector<int>>& maze, int n, vector<string>& ans, string path, vector<vector<bool>>& visited) {
    // Base case: if we've reached the destination
    if (i == n-1 && j == n-1) {
        ans.push_back(path);
        return;
    }

    // Possible moves: Down, Left, Right, Up
    // Down
    if (i+1 < n && !visited[i+1][j] && maze[i+1][j] == 1) {
        visited[i][j] = true;
        solve(i+1, j, maze, n, ans, path + 'D', visited);
        visited[i][j] = false;
    }

    // Left
    if (j-1 >= 0 && !visited[i][j-1] && maze[i][j-1] == 1) {
        visited[i][j] = true;
        solve(i, j-1, maze, n, ans, path + 'L', visited);
        visited[i][j] = false;
    }

    // Right
    if (j+1 < n && !visited[i][j+1] && maze[i][j+1] == 1) {
        visited[i][j] = true;
        solve(i, j+1, maze, n, ans, path + 'R', visited);
        visited[i][j] = false;
    }

    // Up
    if (i-1 >= 0 && !visited[i-1][j] && maze[i-1][j] == 1) {
        visited[i][j] = true;
        solve(i-1, j, maze, n, ans, path + 'U', visited);
        visited[i][j] = false;
    }
}

// Main function to find path in maze
vector<string> findPath(vector<vector<int>>& maze, int n) {
    vector<string> ans;
    
    // If start or end cell is blocked, return empty
    if (maze[0][0] == 0 || maze[n-1][n-1] == 0) {
        return ans;
    }

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    solve(0, 0, maze, n, ans, "", visited);
    return ans;
}

int main() {
    // Example maze
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int n = maze.size();

    vector<string> paths = findPath(maze, n);

    if (paths.empty()) {
        cout << "No path exists!" << endl;
    } else {
        cout << "Possible paths:" << endl;
        for (const string& path : paths) {
            cout << path << endl;
        }
    }

    return 0;
}


