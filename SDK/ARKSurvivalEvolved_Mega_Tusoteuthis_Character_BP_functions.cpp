// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mega_Tusoteuthis_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mega_Tusoteuthis_Character_BP.Mega_Tusoteuthis_Character_BP_C.UserConstructionScript
// ()

void AMega_Tusoteuthis_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mega_Tusoteuthis_Character_BP.Mega_Tusoteuthis_Character_BP_C.UserConstructionScript");

	AMega_Tusoteuthis_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mega_Tusoteuthis_Character_BP.Mega_Tusoteuthis_Character_BP_C.ExecuteUbergraph_Mega_Tusoteuthis_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMega_Tusoteuthis_Character_BP_C::ExecuteUbergraph_Mega_Tusoteuthis_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mega_Tusoteuthis_Character_BP.Mega_Tusoteuthis_Character_BP_C.ExecuteUbergraph_Mega_Tusoteuthis_Character_BP");

	AMega_Tusoteuthis_Character_BP_C_ExecuteUbergraph_Mega_Tusoteuthis_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
