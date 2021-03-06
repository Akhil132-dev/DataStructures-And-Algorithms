LINK LISR
//
reverse a link list
   ListNode* Pre = nullptr;
        ListNode *next = nullptr;
        ListNode* cur = head;
        while(cur!=nullptr){
             next = cur->next;
            cur->next = Pre;
            Pre = cur;
            cur = next;
        }
        return Pre;


2)
find the middle of linklist
(N+n/2)
    ListNode* slow = head;
        int count = 0;
        while(slow!=nullptr){
count++;
            slow=slow->next;
        }
   

          count = count/2;
                count+=1;
        
        int i = 0; slow = head;
        while(slow!=nullptr){   i++;
            if(i==count)return slow;
         
            slow = slow->next;
            
}
   return nullptr;

 2.1)
T = O(n/2)
   ListNode* slow = head;
         ListNode* fast = head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;




3) Marge Two Sorted LinkList
            Time =O(n1+n1);
S = O(n1+n2)
ListNode* Link = new ListNode(INT_MIN);
        ListNode* dd = Link;
        ListNode* L1 = l1;
        ListNode* L2 = l2;
        while(L1!=nullptr and  L2 != nullptr){
            if(L1->val >= L2->val){
             Link->next = L2;
            L2=L2->next;
            } 
            else {
           Link->next = L1;
                L1 =L1->next;
        }
            Link =Link->next;
        }
        if(L2!=nullptr){
            Link->next = L2;
        }
        else if(L1!=nullptr){
            Link->next = L1;
}
return dd->next;

3.1)

best solution2
time = O(n1+n2)
         if(l1==nullptr)return l2;
        if(l2==nullptr)return l1;
        if(l1->val>l2->val) std::swap(l1,l2);
        
        ListNode *res  = l1;
        while(l1!=nullptr and  l2!=nullptr){
            
            ListNode* temp = nullptr;
            while(l1!=nullptr and l1->val <=l2->val){
temp  = l1;
                l1= l1->next;
            
            }
            temp->next = l2;
            std::swap(l1,l2);
        }
            
return res;
}
    
4) Remove N-th node from back of LinkedList 

int count = 0;
        ListNode* h = head;
        while(h!=nullptr){
            count++;
            h = h->next;
        }
        if(count==n)return head->next;
        
        count-=n;
        int mid = 0;
        ListNode* t = head;
        while(t!=nullptr){
            if(mid==count-1)
            {
                t->next = t->next->next;
               } t = t->next; mid++;    
}
   return head; }

4.2)
  TO(N)
ListNode* start  = new ListNode();
        start->next = head;
        ListNode* fast = start;
        ListNode* slow = start;
       
       for(int i =1;i<=n+1;i++){
fast = fast->next;}
        while(fast!=nullptr){
            fast = fast->next;
            slow = slow->next;
}
        slow ->next = slow->next->next;
        return start->next;
        
   }

5)aDD TWO  numbers of linklist
t = (max(l1,l2))
  ListNode* dummy = new ListNode();
        ListNode*temp = dummy;
        int carray = 0;
        while(l1 != nullptr||l2 !=nullptr|| carray){
          
            int sum = 0;if(l1!=nullptr){
sum+=l1->val;
            l1=l1->next;}
           if(l2!=nullptr){
                sum+=l2->val;
               l2 = l2->next;
            }
            sum+=carray;
           carray = sum/10;
             ListNode* node = new ListNode(sum%10);
            temp ->next = node;
            temp = temp->next;
        }
        return dummy->next;



6) Find intersection point of Y LinkedList 

T = (m*n)
of two  linklist
        ListNode*Love = headB;
        
        while(headA!=nullptr){
            Love = headB;
            while(Love!=nullptr){
if(headA==Love){
return Love;
}
                Love = Love->next;
            }
            headA = headA->next;
        }

6.2)
space  =  O(n)
time = (n+m)
 map<ListNode* ,int >mp;
        while(headA!=nullptr){
 mp[headA] = 1;
            headA = headA->next;
        }
        while(headB!=nullptr){
if(mp.find(headB)!=mp.end())return headB;
        headB = headB->next;
        }
        return nullptr;
        
6.3) t =O(m) +O(m-n)+(n)
  ListNode*tempA = nullptr;
        ListNode* tempB =nullptr;
        tempA = headA;
         tempB = headB;
        int countA = 0;
        int countB  = 0;
   while(tempA!=nullptr){
       countA++;
       tempA = tempA->next;
   }
         while(tempB!=nullptr){
       countB++;
       tempB = tempB->next;
   }
        (countA < countB) ?  tempA = headB: tempA = headA ;
        int mid  =  (countA < countB) ?  countB-countA: countA-countB;
        while(mid){

        tempA = tempA->next;
            mid-- ;
        
        }
         (countA < countB) ?  tempB = headA: tempB = headB ;
        while(tempA!=nullptr and tempB!=nullptr){
            if(tempA==tempB)return tempA;
              tempA = tempA->next;
              tempB = tempB->next;
        }
        return nullptr;}

6.4) best one solution
    ListNode* a = headA;
        ListNode* b = headB;
        while(a!=b){
a = a==nullptr?headB:a->next;
        b = b==nullptr?headA:b->next;
        }
        return a;
        

//
7)nDetect a cycle in Linked List
SPACE =(n)
      map<ListNode*,int >mmp;
        while(head!=nullptr){
if(mmp.find(head)!=mmp.end())return 1;
            mmp[head] =  1;
        head = head->next;
        }
        return 0;
    }
7.2)




 if(!head)return 0;
        ListNode* f = head;
        ListNode* s = head;
        while(f!=nullptr and f->next!=nullptr){
            s = s->next;
            f = f->next->next;
            if(s == f)
                return 1;
            
        }
        return 0;}


8) palindrom liklist
    if(!head)return 1;
        vector<int>s;
         vector<int>s1;
        ListNode* t = head;
        while(t!=nullptr){
s.push_back(t->val);
            s1.push_back(t->val);
            t = t->next;
        
        }
        int flag = 0;
        reverse(s1.begin(), s1.end()); 
        for(int i =0;i<s1.size();i++){
if(s1[i]==s[i]) flag =1;
        else {
            flag = 0;
            break;
        }
        }
        return flag;

8.2) O(n/2)+O(n/2)+O(n/2)
     ListNode* sp  = head , *fs = head, *mid = nullptr;
        while(fs!=nullptr and fs->next!=nullptr)
        {
            sp = sp->next;
            fs = fs->next->next;
        }
        if(fs!=nullptr)mid = sp->next;
        else mid  = sp;
    ListNode* prev = nullptr; ListNode *next  = nullptr;
        while(mid!=nullptr){
            next  = mid ->next;
            mid->next = prev;
            prev = mid;
            mid = next;
        }
        while(prev!=nullptr){
            if(prev->val !=head->val)return false;
            prev=prev->next;
            head=head->next;
        }
        return true;





9)Find the starting point of the linklist 
        map <ListNode* ,int>mmp;
        while(head!=nullptr){
if(mmp.find(head)!= mmp.end())return head;
            mmp[head] =1;
            head = head->next;
        
        }
        return nullptr;




9.1) ListNode* slow= head;
        ListNode* fast = head;
        ListNode*entry = head;
        while(fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(slow!=entry){
slow = slow->next;
                entry  = entry->next;}
                return entry;
            }
        }
        return  nullptr;










1o) Flattening of a LinkedList 

Node* margeTwolinklist(Node* a,Node*b){
  Node* temp = new Node(0);
  Node* res = temp;
  whiel(a!=nullptr and b!= nullptr){
    if(a->data <b->data){
      temp->bottom = a;
      temp = temp->bottom;
      a = a->bottom;
    }
    else{
      temp->bottom = b;
      temp=temp->bottom;
      b = b->bottom;
    }
  }
  if(a)temp->bottom=a;
  else temp->bottom=b;
  return res->bottom;
}
Node* floatten(Node* root){
  if(root == nullptr or root->next == nullptr){
    return root;
  }
  root->next = floatten(root->next);
  root = margeTwolinklist(root, root->next);
  return root;
}






11 roteted a linklits by// 
        ListNode*  temp = head;
    ListNode*  temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }
        temp = head;
        if(!head)return head;
         if(!head->next)return head;
        for(int i =0;i<k%count;i++){

            temp = head;
            ListNode* pre =  nullptr;
            while(temp->next!=nullptr){
                pre = temp;
                temp=temp->next;
                
            }
            ListNode* t1 = head;
            head = temp;
            head->next =t1;
            if(pre) pre->next =nullptr;
                
          
        }
       return head;
    }

roteted a linklits by given number

           if(head == NULL){
            return head;
        }


        ListNode *curr, dummy;
        curr = dummy.next = head;
        int len = 0;
        
        while(curr){
            len++;
            curr = curr->next;
        }
        
        k = k%len;
        
        if(k == 0){
            return head;
        }
        
        ListNode *p1, *p2;
        p2 = p1 = &dummy;
      //  k--;
        while(k){
            p2 = p2->next;
            k--;
        }
        while(p2->next){
            p1 = p1->next;
            p2 = p2->next;
        }
        
        head = p1->next;
        p1->next = NULL;
        p2->next = dummy.next;
        return head;
    }

second soluitons
if(!head || !head->next || k==0)return head;
ListNode* cur = head;
int len = 1;
while(cur->next!=nullptr and len++){
  cur = cur->next;
}
cur->next = head;
k = k%len;
k =len-k;

while(k--) cur = cur->next;
head = cur->next;
cur->next = nullptr;

return head;




Q)copy the linklist
        Node *iter = head; 
          Node *front = head;

          // First round: make copy of each node,
          // and link them together side-by-side in a single list.
          while (iter != NULL) {
            front = iter->next;

            Node *copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;

            iter = front;
          }

          // Second round: assign random pointers for the copy nodes.
          iter = head;
          while (iter != NULL) {
            if (iter->random != NULL) {
              iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
          }

          // Third round: restore the original list, and extract the copy list.
          iter = head;
          Node *pseudoHead = new Node(0);
          Node *copy = pseudoHead;

          while (iter != NULL) {
            front = iter->next->next;

            // extract the copy
            copy->next = iter->next;

            // restore the original list
            iter->next = front;
              
            copy = copy -> next; 
            iter = front;
          }

          return pseudoHead->next;

        
