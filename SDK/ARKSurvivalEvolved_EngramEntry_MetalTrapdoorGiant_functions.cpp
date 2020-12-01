// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalTrapdoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalTrapdoorGiant.EngramEntry_MetalTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_MetalTrapdoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalTrapdoorGiant_C::ExecuteUbergraph_EngramEntry_MetalTrapdoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalTrapdoorGiant.EngramEntry_MetalTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_MetalTrapdoorGiant");

	UEngramEntry_MetalTrapdoorGiant_C_ExecuteUbergraph_EngramEntry_MetalTrapdoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
