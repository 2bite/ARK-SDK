// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPet_AIController_Base_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternPet_AIController_Base_BP.LanternPet_AIController_Base_BP_C.UserConstructionScript
// ()

void ALanternPet_AIController_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_AIController_Base_BP.LanternPet_AIController_Base_BP_C.UserConstructionScript");

	ALanternPet_AIController_Base_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPet_AIController_Base_BP.LanternPet_AIController_Base_BP_C.ExecuteUbergraph_LanternPet_AIController_Base_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPet_AIController_Base_BP_C::ExecuteUbergraph_LanternPet_AIController_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPet_AIController_Base_BP.LanternPet_AIController_Base_BP_C.ExecuteUbergraph_LanternPet_AIController_Base_BP");

	ALanternPet_AIController_Base_BP_C_ExecuteUbergraph_LanternPet_AIController_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
