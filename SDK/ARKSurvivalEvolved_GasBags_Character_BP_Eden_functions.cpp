// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Character_BP_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasBags_Character_BP_Eden.GasBags_Character_BP_Eden_C.UserConstructionScript
// ()

void AGasBags_Character_BP_Eden_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP_Eden.GasBags_Character_BP_Eden_C.UserConstructionScript");

	AGasBags_Character_BP_Eden_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasBags_Character_BP_Eden.GasBags_Character_BP_Eden_C.ExecuteUbergraph_GasBags_Character_BP_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasBags_Character_BP_Eden_C::ExecuteUbergraph_GasBags_Character_BP_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP_Eden.GasBags_Character_BP_Eden_C.ExecuteUbergraph_GasBags_Character_BP_Eden");

	AGasBags_Character_BP_Eden_C_ExecuteUbergraph_GasBags_Character_BP_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
