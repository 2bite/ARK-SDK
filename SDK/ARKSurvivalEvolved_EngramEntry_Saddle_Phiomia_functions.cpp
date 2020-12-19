// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Phiomia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Phiomia.EngramEntry_Saddle_Phiomia_C.ExecuteUbergraph_EngramEntry_Saddle_Phiomia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Phiomia_C::ExecuteUbergraph_EngramEntry_Saddle_Phiomia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Phiomia.EngramEntry_Saddle_Phiomia_C.ExecuteUbergraph_EngramEntry_Saddle_Phiomia");

	UEngramEntry_Saddle_Phiomia_C_ExecuteUbergraph_EngramEntry_Saddle_Phiomia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
