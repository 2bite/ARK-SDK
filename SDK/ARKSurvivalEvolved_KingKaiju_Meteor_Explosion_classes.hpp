#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_Meteor_Explosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KingKaiju_Meteor_Explosion.KingKaiju_Meteor_Explosion_C
// 0x0000 (0x0500 - 0x0500)
class AKingKaiju_Meteor_Explosion_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KingKaiju_Meteor_Explosion.KingKaiju_Meteor_Explosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_KingKaiju_Meteor_Explosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
