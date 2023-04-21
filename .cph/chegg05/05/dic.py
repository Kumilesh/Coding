#creating the dictionary for 3 users
d={}
d['Alice']=[('Tenet',7.5),('Joker',8.5),('Nobody',8.0),('Roohi',6.0)]
d['Brad']=[('Karnan',8.5),('Roohi',5.5),('Joker',8.0),('Greybound',7.5)]
d['Cathy']=[('Tenet',7.0),('Wonder Woman 1984',5.0),('Nobody',7.5)]
#print(d['Alice'])
#How many different movies were rated.
li=[]
for i in d.values():
    for j in i:
        if j[0] not in li:
            li.append(j[0])
print(len(li),"different movies were rated by users")
#dictionary usec to store count.
c_d={}
for i in d.values():
    for j in i:
        if j[0] in c_d:
            c_d[j[0]]+=1
        else:
            c_d[j[0]]=1
#print(c_d)
tot_m_r={}
for i in d.values():
    for j in i:
        if j[0] in tot_m_r:
            tot_m_r[j[0]]+=j[1]
        else:
            tot_m_r[j[0]]=j[1]
#print(tot_m_r)
avg_movie_ratings={}
for i,j in tot_m_r.items():
    avg_movie_ratings[i]=j/c_d[i]
print("Average rating for movies are",avg_movie_ratings)
#4.user rated movie set.
us_rated_movie_set={}
for i,j in d.items():
    us_rated_movie_set[i]=set()
    for k in j:
        us_rated_movie_set[i].add(k[0])
print("user rated movie lists are",us_rated_movie_set)
rm_Alice=set()
rm_Brad=set()
rm_Cathy=set()
for i in us_rated_movie_set['Brad']:
    if i not in us_rated_movie_set['Alice'] and avg_movie_ratings[i]>7:
        rm_Alice.add(i)
for i in us_rated_movie_set['Cathy']:
    if i not in us_rated_movie_set['Alice'] and avg_movie_ratings[i]>7:
        rm_Alice.add(i)
print("recommended movie(s) for Alice:", rm_Alice) 
for i in us_rated_movie_set['Alice']:
    if i not in us_rated_movie_set['Brad'] and avg_movie_ratings[i]>7:
        rm_Brad.add(i)
for i in us_rated_movie_set['Cathy']:
    if i not in us_rated_movie_set['Brad'] and avg_movie_ratings[i]>7:
        rm_Brad.add(i)
print("recommended movie(s) for brad:", rm_Brad)  
      
for i in us_rated_movie_set['Alice']:
    if i not in us_rated_movie_set['Cathy'] and avg_movie_ratings[i]>7:
        rm_Cathy.add(i)
for i in us_rated_movie_set['Brad']:
    if i not in us_rated_movie_set['Cathy'] and avg_movie_ratings[i]>7:
        rm_Cathy.add(i)
print("recommended movie(s) for Cathy:", rm_Cathy)  
      




            

