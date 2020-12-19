// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_FenceSupport_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_FenceSupport_Wood.EngramEntry_FenceSupport_Wood_C.ExecuteUbergraph_EngramEntry_FenceSupport_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_FenceSupport_Wood_C::ExecuteUbergraph_EngramEntry_FenceSupport_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_FenceSupport_Wood.EngramEntry_FenceSupport_Wood_C.ExecuteUbergraph_EngramEntry_FenceSupport_Wood");

	UEngramEntry_FenceSupport_Wood_C_ExecuteUbergraph_EngramEntry_FenceSupport_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
