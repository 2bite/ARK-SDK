// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalFloor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalFloor.EngramEntry_MetalFloor_C.ExecuteUbergraph_EngramEntry_MetalFloor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalFloor_C::ExecuteUbergraph_EngramEntry_MetalFloor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalFloor.EngramEntry_MetalFloor_C.ExecuteUbergraph_EngramEntry_MetalFloor");

	UEngramEntry_MetalFloor_C_ExecuteUbergraph_EngramEntry_MetalFloor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
