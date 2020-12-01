// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Crater_Forest_Near_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_Crater_Forest_Near.Ext_Crater_Forest_Near_C.ExecuteUbergraph_Ext_Crater_Forest_Near
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExt_Crater_Forest_Near_C::ExecuteUbergraph_Ext_Crater_Forest_Near(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Crater_Forest_Near.Ext_Crater_Forest_Near_C.ExecuteUbergraph_Ext_Crater_Forest_Near");

	AExt_Crater_Forest_Near_C_ExecuteUbergraph_Ext_Crater_Forest_Near_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
