// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalTrapdoor.EngramEntry_MetalTrapdoor_C.ExecuteUbergraph_EngramEntry_MetalTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalTrapdoor_C::ExecuteUbergraph_EngramEntry_MetalTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalTrapdoor.EngramEntry_MetalTrapdoor_C.ExecuteUbergraph_EngramEntry_MetalTrapdoor");

	UEngramEntry_MetalTrapdoor_C_ExecuteUbergraph_EngramEntry_MetalTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
