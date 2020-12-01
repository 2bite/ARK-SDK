// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_Character_BP_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gigant_Character_BP_Base.Gigant_Character_BP_Base_C.UserConstructionScript
// ()

void AGigant_Character_BP_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP_Base.Gigant_Character_BP_Base_C.UserConstructionScript");

	AGigant_Character_BP_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gigant_Character_BP_Base.Gigant_Character_BP_Base_C.ExecuteUbergraph_Gigant_Character_BP_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGigant_Character_BP_Base_C::ExecuteUbergraph_Gigant_Character_BP_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gigant_Character_BP_Base.Gigant_Character_BP_Base_C.ExecuteUbergraph_Gigant_Character_BP_Base");

	AGigant_Character_BP_Base_C_ExecuteUbergraph_Gigant_Character_BP_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
