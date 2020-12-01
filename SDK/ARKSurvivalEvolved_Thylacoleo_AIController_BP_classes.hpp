#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C
// 0x0000 (0x0911 - 0x0911)
class AThylacoleo_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thylacoleo_AIController_BP.Thylacoleo_AIController_BP_C");
		return ptr;
	}


	bool BPForceTargetDinoRider(class AShooterCharacter** playerTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_Thylacoleo_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
