// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_BeerBarrel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BeerBarrel.EngramEntry_BeerBarrel_C.ExecuteUbergraph_EngramEntry_BeerBarrel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BeerBarrel_C::ExecuteUbergraph_EngramEntry_BeerBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BeerBarrel.EngramEntry_BeerBarrel_C.ExecuteUbergraph_EngramEntry_BeerBarrel");

	UEngramEntry_BeerBarrel_C_ExecuteUbergraph_EngramEntry_BeerBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
