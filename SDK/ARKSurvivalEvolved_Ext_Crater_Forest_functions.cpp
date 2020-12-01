// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Crater_Forest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ext_Crater_Forest.Ext_Crater_Forest_C.ExecuteUbergraph_Ext_Crater_Forest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExt_Crater_Forest_C::ExecuteUbergraph_Ext_Crater_Forest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ext_Crater_Forest.Ext_Crater_Forest_C.ExecuteUbergraph_Ext_Crater_Forest");

	AExt_Crater_Forest_C_ExecuteUbergraph_Ext_Crater_Forest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
