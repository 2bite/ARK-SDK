// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalShirt.EngramEntry_MetalShirt_C.ExecuteUbergraph_EngramEntry_MetalShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalShirt_C::ExecuteUbergraph_EngramEntry_MetalShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalShirt.EngramEntry_MetalShirt_C.ExecuteUbergraph_EngramEntry_MetalShirt");

	UEngramEntry_MetalShirt_C_ExecuteUbergraph_EngramEntry_MetalShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
