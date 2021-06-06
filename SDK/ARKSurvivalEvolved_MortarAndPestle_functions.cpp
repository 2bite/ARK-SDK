// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MortarAndPestle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MortarAndPestle.MortarAndPestle_C.UserConstructionScript
// ()

void AMortarAndPestle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MortarAndPestle.MortarAndPestle_C.UserConstructionScript");

	AMortarAndPestle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MortarAndPestle.MortarAndPestle_C.ExecuteUbergraph_MortarAndPestle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMortarAndPestle_C::ExecuteUbergraph_MortarAndPestle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MortarAndPestle.MortarAndPestle_C.ExecuteUbergraph_MortarAndPestle");

	AMortarAndPestle_C_ExecuteUbergraph_MortarAndPestle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
