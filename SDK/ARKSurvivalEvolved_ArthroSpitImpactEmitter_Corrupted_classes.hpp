#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArthroSpitImpactEmitter_Corrupted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArthroSpitImpactEmitter_Corrupted.ArthroSpitImpactEmitter_Corrupted_C
// 0x0000 (0x0500 - 0x0500)
class AArthroSpitImpactEmitter_Corrupted_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArthroSpitImpactEmitter_Corrupted.ArthroSpitImpactEmitter_Corrupted_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArthroSpitImpactEmitter_Corrupted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
