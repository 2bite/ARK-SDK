// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MiracleGro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MiracleGro.EngramEntry_MiracleGro_C.ExecuteUbergraph_EngramEntry_MiracleGro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MiracleGro_C::ExecuteUbergraph_EngramEntry_MiracleGro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MiracleGro.EngramEntry_MiracleGro_C.ExecuteUbergraph_EngramEntry_MiracleGro");

	UEngramEntry_MiracleGro_C_ExecuteUbergraph_EngramEntry_MiracleGro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
