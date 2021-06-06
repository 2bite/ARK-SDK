// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StonePillar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StonePillar.EngramEntry_StonePillar_C.ExecuteUbergraph_EngramEntry_StonePillar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StonePillar_C::ExecuteUbergraph_EngramEntry_StonePillar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StonePillar.EngramEntry_StonePillar_C.ExecuteUbergraph_EngramEntry_StonePillar");

	UEngramEntry_StonePillar_C_ExecuteUbergraph_EngramEntry_StonePillar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
