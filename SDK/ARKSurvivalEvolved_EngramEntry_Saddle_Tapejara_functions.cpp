// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Tapejara.EngramEntry_Saddle_Tapejara_C.ExecuteUbergraph_EngramEntry_Saddle_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Tapejara_C::ExecuteUbergraph_EngramEntry_Saddle_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Tapejara.EngramEntry_Saddle_Tapejara_C.ExecuteUbergraph_EngramEntry_Saddle_Tapejara");

	UEngramEntry_Saddle_Tapejara_C_ExecuteUbergraph_EngramEntry_Saddle_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
