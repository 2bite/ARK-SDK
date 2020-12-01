// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalCeilingWithTrapdoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalCeilingWithTrapdoor.EngramEntry_MetalCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalCeilingWithTrapdoor_C::ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalCeilingWithTrapdoor.EngramEntry_MetalCeilingWithTrapdoor_C.ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoor");

	UEngramEntry_MetalCeilingWithTrapdoor_C_ExecuteUbergraph_EngramEntry_MetalCeilingWithTrapdoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
