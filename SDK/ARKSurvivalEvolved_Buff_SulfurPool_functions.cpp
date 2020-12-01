// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SulfurPool_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SulfurPool.Buff_SulfurPool_C.UserConstructionScript
// ()

void ABuff_SulfurPool_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SulfurPool.Buff_SulfurPool_C.UserConstructionScript");

	ABuff_SulfurPool_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SulfurPool.Buff_SulfurPool_C.ExecuteUbergraph_Buff_SulfurPool
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SulfurPool_C::ExecuteUbergraph_Buff_SulfurPool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SulfurPool.Buff_SulfurPool_C.ExecuteUbergraph_Buff_SulfurPool");

	ABuff_SulfurPool_C_ExecuteUbergraph_Buff_SulfurPool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif