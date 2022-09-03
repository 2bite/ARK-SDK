#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Armor_TrailEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AAmargaSpike_Armor_TrailEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Armor_TrailEmitter.AmargaSpike_Armor_TrailEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AmargaSpike_Armor_TrailEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
