// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ChitinOrKeratin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ChitinOrKeratin.PrimalItemResource_ChitinOrKeratin_C.ExecuteUbergraph_PrimalItemResource_ChitinOrKeratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ChitinOrKeratin_C::ExecuteUbergraph_PrimalItemResource_ChitinOrKeratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ChitinOrKeratin.PrimalItemResource_ChitinOrKeratin_C.ExecuteUbergraph_PrimalItemResource_ChitinOrKeratin");

	UPrimalItemResource_ChitinOrKeratin_C_ExecuteUbergraph_PrimalItemResource_ChitinOrKeratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
