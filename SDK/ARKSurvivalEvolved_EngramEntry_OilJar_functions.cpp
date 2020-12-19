// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_OilJar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_OilJar.EngramEntry_OilJar_C.ExecuteUbergraph_EngramEntry_OilJar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_OilJar_C::ExecuteUbergraph_EngramEntry_OilJar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_OilJar.EngramEntry_OilJar_C.ExecuteUbergraph_EngramEntry_OilJar");

	UEngramEntry_OilJar_C_ExecuteUbergraph_EngramEntry_OilJar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
