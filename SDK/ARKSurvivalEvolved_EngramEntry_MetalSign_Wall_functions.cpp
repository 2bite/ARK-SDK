// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MetalSign_Wall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MetalSign_Wall.EngramEntry_MetalSign_Wall_C.ExecuteUbergraph_EngramEntry_MetalSign_Wall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MetalSign_Wall_C::ExecuteUbergraph_EngramEntry_MetalSign_Wall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MetalSign_Wall.EngramEntry_MetalSign_Wall_C.ExecuteUbergraph_EngramEntry_MetalSign_Wall");

	UEngramEntry_MetalSign_Wall_C_ExecuteUbergraph_EngramEntry_MetalSign_Wall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
