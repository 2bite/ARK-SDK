// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_Disease_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_Disease.Buff_Base_Disease_C.UserConstructionScript
// ()

void ABuff_Base_Disease_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Disease.Buff_Base_Disease_C.UserConstructionScript");

	ABuff_Base_Disease_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_Disease.Buff_Base_Disease_C.ExecuteUbergraph_Buff_Base_Disease
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_Disease_C::ExecuteUbergraph_Buff_Base_Disease(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Disease.Buff_Base_Disease_C.ExecuteUbergraph_Buff_Base_Disease");

	ABuff_Base_Disease_C_ExecuteUbergraph_Buff_Base_Disease_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
