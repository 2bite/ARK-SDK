// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MiningDrill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MiningDrill.EngramEntry_MiningDrill_C.ExecuteUbergraph_EngramEntry_MiningDrill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MiningDrill_C::ExecuteUbergraph_EngramEntry_MiningDrill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MiningDrill.EngramEntry_MiningDrill_C.ExecuteUbergraph_EngramEntry_MiningDrill");

	UEngramEntry_MiningDrill_C_ExecuteUbergraph_EngramEntry_MiningDrill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
