// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CactusSoup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CactusSoup.Buff_CactusSoup_C.UserConstructionScript
// ()

void ABuff_CactusSoup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CactusSoup.Buff_CactusSoup_C.UserConstructionScript");

	ABuff_CactusSoup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CactusSoup.Buff_CactusSoup_C.ExecuteUbergraph_Buff_CactusSoup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CactusSoup_C::ExecuteUbergraph_Buff_CactusSoup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CactusSoup.Buff_CactusSoup_C.ExecuteUbergraph_Buff_CactusSoup");

	ABuff_CactusSoup_C_ExecuteUbergraph_Buff_CactusSoup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
