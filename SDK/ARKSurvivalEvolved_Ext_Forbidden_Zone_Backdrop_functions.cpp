// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Forbidden_Zone_Backdrop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_Forbidden_Zone_Backdrop.Ext_Forbidden_Zone_Backdrop_C.ExecuteUbergraph_Ext_Forbidden_Zone_Backdrop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExt_Forbidden_Zone_Backdrop_C::ExecuteUbergraph_Ext_Forbidden_Zone_Backdrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Forbidden_Zone_Backdrop.Ext_Forbidden_Zone_Backdrop_C.ExecuteUbergraph_Ext_Forbidden_Zone_Backdrop");

	AExt_Forbidden_Zone_Backdrop_C_ExecuteUbergraph_Ext_Forbidden_Zone_Backdrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
