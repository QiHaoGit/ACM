/*#include <iostream>    // c++ �еı�׼�������ͷ�ļ����������
#include <algorithm>   // algorithm,���ļ�Ϊ�㷨�������˴������ø�Ч���㷨����
#include <cstdio>
using namespace std;   // ��׼�����ռ䣬ȱʡ�����䣬sort ���ò���

int main()
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};

	// Ҫ��� a ��������

	sort(a,a+10);   // sort ����ĵ�һ�������������������������ַ���ڶ�������������Ҫ����ĳ���

	for(int i=9;i>=0;i--)
		printf("%d\n",a[i]);
	return 0;
}


#include <iostream>    // c++ �еı�׼�������ͷ�ļ����������
#include <algorithm>   // algorithm,���ļ�Ϊ�㷨�������˴������ø�Ч���㷨����
#include <cstdio>

using namespace std;   // ��׼�����ռ䣬ȱʡ�����䣬sort ���ò���

int cmp(int a,int b)
{
	return a>b;        // ����С�ں�
}


int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};

	// Ҫ��� a ��������

	sort(a,a+10,cmp);   // sort ����ĵ�һ�������������������������ַ���ڶ�������������Ҫ����ĳ���

	for(int i=0;i<10;i++)
		printf("%d\n",a[i]);
	return 0;
}


typedef struct node
{
    int x;
    int y;

    bool operator <(const node &node1) const
    {
        return x<node1.x;
    }

}node;

#include <iostream>

#include <map>

using namespace std;



int main()

{

    map<char,int > map1;

    map<char,int>::iterator mapIter;

    //char �Ǽ������ͣ�int��ֵ������

    //�����ǳ�ʼ��������������

    //Ҳ������map1.insert(map<char,int >::value_type(''c'',3));

    map1['c']=3;

    map1['d']=4;

    map1['a']=1;

    map1['b']=2;
    //map1['c']=4;

    for(mapIter=map1.begin();mapIter!=map1.end();++mapIter)

        cout<<" "<<(*mapIter).first<<": "<<(*mapIter).second;

    //first��Ӧ�����е�char����second��Ӧ�����е�intֵ

    //������Ӧ��d����ֵ���������ģ�

    map<char,int>::const_iterator ptr;

    ptr=map1.find('d');

    cout<<'\n'<<" "<<(*ptr).first<<" ����Ӧ��ֵ��"<<(*ptr).second;

    return 0;

}

//�����õ���vector�ĳ�Ա������begin()��end()��push_back()��assign()��front()��back()��erase()��empty()��at()��size()��
#include <iostream>

#include <vector>

using namespace std;



typedef vector<int> INTVECTOR;//�Զ�������INTVECTOR

//����vector�����Ĺ���



int main()

{

    //vec1�����ʼΪ��

    INTVECTOR vec1;

    //vec2���������10��ֵΪ6��Ԫ��

    INTVECTOR vec2(10,6);

    //vec3���������3��ֵΪ6��Ԫ�أ���������

    INTVECTOR vec3(vec2.begin(),vec2.begin()+3);

    //����һ����Ϊi��˫�������

    INTVECTOR::iterator i;

    //��ǰ�����ʾvec1�е�����

    cout<<"vec1.begin()--vec1.end():"<<endl;

    for (i =vec1.begin(); i !=vec1.end(); ++i)

        cout << *i << " ";

    cout << endl;

    //��ǰ�����ʾvec2�е�����

    cout<<"vec2.begin()--vec2.end():"<<endl;

    for (i =vec2.begin(); i !=vec2.end(); ++i)

        cout << *i << " ";

    cout << endl;

    //��ǰ�����ʾvec3�е�����

    cout<<"vec3.begin()--vec3.end():"<<endl;

    for (i =vec3.begin(); i !=vec3.end(); ++i)

        cout << *i << " ";

    cout << endl;

    //������ӺͲ����Ա������vector��֧�ִ�ǰ����

    vec1.push_back(2);//�Ӻ������һ����Ա

    vec1.push_back(4);

    vec1.insert(vec1.begin()+1,5);//��vec1��һ����λ���ϲ����Ա5

    //��vec1��һ��λ�ÿ�ʼ����vec3�����г�Ա

    vec1.insert(vec1.begin()+1,vec3.begin(),vec3.end());

    cout<<"after push() and insert() now the vec1 is:" <<endl;

    for (i =vec1.begin(); i !=vec1.end(); ++i)

        cout << *i << " ";

    cout << endl;

    //���Ը�ֵ��Ա����

    vec2.assign(8,1);   // ���¸�vec2��ֵ��8����Ա�ĳ�ʼֵ��Ϊ1

    cout<<"vec2.assign(8,1):" <<endl;

    for (i =vec2.begin(); i !=vec2.end(); ++i)

        cout << *i << " ";

    cout << endl;

    //���������ຯ��

    cout<<"vec1.front()="<<vec1.front()<<endl;//vec1�������Ա

    cout<<"vec1.back()="<<vec1.back()<<endl;//vec1�����һ����Ա

    cout<<"vec1.at(4)="<<vec1.at(4)<<endl;//vec1�ĵ������Ա

    cout<<"vec1[4]="<<vec1[4]<<endl;

    //�����Ƴ���ɾ��

    vec1.pop_back();//�����һ����Ա�Ƴ�vec1

    vec1.erase(vec1.begin()+1,vec1.end()-2);//ɾ����Ա

    cout<<"vec1.pop_back() and vec1.erase():" <<endl;

    for (i =vec1.begin(); i !=vec1.end(); ++i)

        cout << *i << " ";

    cout << endl;

    //��ʾ���е�״̬��Ϣ

    cout<<"vec1.size(): "<<vec1.size()<<endl;//��ӡ��Ա����

    cout<<"vec1.empty(): "<<vec1.empty()<<endl;//���

}

#include <iostream>

#include <string>

#include <list>

using namespace std;



void PrintIt(list<int> n)

{

    for(list<int>::iterator iter=n.begin(); iter!=n.end(); ++iter)

      cout<<*iter<<" ";//�õ������������ѭ��

}



int main()

{

    list<int> listn1,listn2;    //��listn1,listn2��ʼ��

    listn1.push_back(123);

    listn1.push_back(0);

    listn1.push_back(34);

    listn1.push_back(1123);    //now listn1:123,0,34,1123

    listn2.push_back(100);

    listn2.push_back(12);    //now listn2:12,100

    listn1.sort();

    listn2.sort();    //��listn1��listn2����

    //now listn1:0,34,123,1123         listn2:12,100

    PrintIt(listn1);

    cout<<endl;

    PrintIt(listn2);

    listn1.merge(listn2);    //�ϲ����������б��,listn1:0��12��34��100��123��1123

    cout<<endl;

    PrintIt(listn1);

}

*/
#include <iostream>

#include <set>

using namespace std;



int main()

{

    set<int> set1;

    for(int i=0; i<10; ++i)

        set1.insert(i);

    for(set<int>::iterator p=set1.begin();p!=set1.end();++p)

        cout<<*p<<"";

    if(set1.insert(3).second)//��3���뵽set1��

//����ɹ���set1.insert(3).second����1�����򷵻�0

//�����У������Ѿ���3���Ԫ���ˣ����Բ��뽫ʧ��

        cout<<"set insert success";

    else

        cout<<"set insert failed";

    int a[] = {4, 1, 1, 1, 1, 1, 0, 5, 1, 0};

    multiset<int> A;

    A.insert(set1.begin(),set1.end());

    A.insert(a,a+10);

    cout<<endl;

    for(multiset<int>::iterator p=A.begin();p!=A.end();++p)

    cout<<*p<<" ";

    return 0;

}
