// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneGateway_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneGateway_Large.EngramEntry_StoneGateway_Large_C.ExecuteUbergraph_EngramEntry_StoneGateway_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneGateway_Large_C::ExecuteUbergraph_EngramEntry_StoneGateway_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneGateway_Large.EngramEntry_StoneGateway_Large_C.ExecuteUbergraph_EngramEntry_StoneGateway_Large");

	UEngramEntry_StoneGateway_Large_C_ExecuteUbergraph_EngramEntry_StoneGateway_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
