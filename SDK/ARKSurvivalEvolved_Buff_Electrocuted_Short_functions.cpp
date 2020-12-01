// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_Short_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Electrocuted_Short.Buff_Electrocuted_Short_C.UserConstructionScript
// ()

void ABuff_Electrocuted_Short_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_Short.Buff_Electrocuted_Short_C.UserConstructionScript");

	ABuff_Electrocuted_Short_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_Short.Buff_Electrocuted_Short_C.ExecuteUbergraph_Buff_Electrocuted_Short
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_Short_C::ExecuteUbergraph_Buff_Electrocuted_Short(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_Short.Buff_Electrocuted_Short_C.ExecuteUbergraph_Buff_Electrocuted_Short");

	ABuff_Electrocuted_Short_C_ExecuteUbergraph_Buff_Electrocuted_Short_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
