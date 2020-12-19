// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalCeilingWithTrapdoorGiant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalCeilingWithTrapdoorGiant.EngramEntry_MetalCeilingWithTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoorGiant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalCeilingWithTrapdoorGiant_C::ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoorGiant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalCeilingWithTrapdoorGiant.EngramEntry_MetalCeilingWithTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoorGiant");

	UEngramEntry_MetalCeilingWithTrapdoorGiant_C_ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoorGiant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
