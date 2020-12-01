// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ARKBone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ARKBone.PrimalItemResource_ARKBone_C.ExecuteUbergraph_PrimalItemResource_ARKBone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ARKBone_C::ExecuteUbergraph_PrimalItemResource_ARKBone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ARKBone.PrimalItemResource_ARKBone_C.ExecuteUbergraph_PrimalItemResource_ARKBone");

	UPrimalItemResource_ARKBone_C_ExecuteUbergraph_PrimalItemResource_ARKBone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
