// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalSickle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalSickle.EngramEntry_MetalSickle_C.ExecuteUbergraph_EngramEntry_MetalSickle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalSickle_C::ExecuteUbergraph_EngramEntry_MetalSickle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalSickle.EngramEntry_MetalSickle_C.ExecuteUbergraph_EngramEntry_MetalSickle");

	UEngramEntry_MetalSickle_C_ExecuteUbergraph_EngramEntry_MetalSickle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
