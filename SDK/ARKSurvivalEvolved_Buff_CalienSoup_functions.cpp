// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CalienSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CalienSoup.Buff_CalienSoup_C.UserConstructionScript
// ()

void ABuff_CalienSoup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CalienSoup.Buff_CalienSoup_C.UserConstructionScript");

	ABuff_CalienSoup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CalienSoup.Buff_CalienSoup_C.ExecuteUbergraph_Buff_CalienSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CalienSoup_C::ExecuteUbergraph_Buff_CalienSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CalienSoup.Buff_CalienSoup_C.ExecuteUbergraph_Buff_CalienSoup");

	ABuff_CalienSoup_C_ExecuteUbergraph_Buff_CalienSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
