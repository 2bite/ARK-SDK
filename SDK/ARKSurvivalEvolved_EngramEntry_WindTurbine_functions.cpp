// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WindTurbine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WindTurbine.EngramEntry_WindTurbine_C.ExecuteUbergraph_EngramEntry_WindTurbine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WindTurbine_C::ExecuteUbergraph_EngramEntry_WindTurbine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WindTurbine.EngramEntry_WindTurbine_C.ExecuteUbergraph_EngramEntry_WindTurbine");

	UEngramEntry_WindTurbine_C_ExecuteUbergraph_EngramEntry_WindTurbine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
