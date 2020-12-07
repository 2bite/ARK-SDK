#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_Impact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Meteor_Shield_Impact.Meteor_Shield_Impact_C
// 0x0000 (0x0518 - 0x0518)
class AMeteor_Shield_Impact_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Meteor_Shield_Impact.Meteor_Shield_Impact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Meteor_Shield_Impact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
