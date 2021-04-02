class HitPoints : HitPoints
        {
            class HitFace : HitFace
            {
                armor = 1;                
                passThrough = 0.100000;
                radius = 0.080000;
                explosionShielding = 0.100000;
                minimalHit = 0.010000;                            
            };

            class HitNeck : HitNeck
            {
                armor = 4;                
                passThrough = 0.100000;
                radius = 0.100000;
                explosionShielding = 0.500000;
                minimalHit = 0.010000;                
            };

            class HitHead : HitHead
            {
                armor = 1;                
                passThrough = 0.100000;
                radius = 0.200000;
                explosionShielding = 0.500000;
                minimalHit = 0.010000;                            
            };

            class HitPelvis : HitPelvis 
            {
                armor = 6;                
                passThrough = 0.040000;
                radius = 0.200000;
                explosionShielding = 1;                
                minimalHit = 0.010000;        
            };

            class HitAbdomen : HitAbdomen
            {
                armor = 6;                
                passThrough = 0.040000;
                radius = 0.150000;
                explosionShielding = 1;                
                minimalHit = 0.010000;                            
            };

            class HitDiaphragm : HitDiaphragm
            {
                armor = 6;                
                passThrough = 0.040000;
                radius = 0.150000;
                explosionShielding = 1.500000;                
                minimalHit = 0.010000;                        
            };

            class HitChest : HitChest
            {
                armor = 6;                
                passThrough = 0.040000;
                radius = 0.150000;
                explosionShielding = 1.500000;                
                minimalHit = 0.010000;                            
            };

            class HitBody : HitBody 
            {
                armor = 1000;                
                passThrough = 0.040000;
                radius = 0.160000;
                explosionShielding = 1.500000;                
                minimalHit = 0.010000;                                        
            };

            class HitArms : HitArms 
            {
                armor = 8;                
                passThrough = 0.600000;
                radius = 0.100000;
                explosionShielding = 0.800000;                
                minimalHit = 0.010000;                                        
            };            

            class HitHands : HitHands
            {
                armor = 8;                
                passThrough = 0.600000;
                radius = 0.100000;
                explosionShielding = 0.800000;                
                minimalHit = 0.010000;                        
            };            

            class HitLegs : HitLegs 
            {
                armor = 8;                
                passThrough = 0.600000;
                radius = 0.120000;
                explosionShielding = 0.800000;                
                minimalHit = 0.010000;            
            };
        };
