// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_CorruptedPolymer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_CorruptedPolymer.PrimalItemResource_CorruptedPolymer_C.ExecuteUbergraph_PrimalItemResource_CorruptedPolymer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_CorruptedPolymer_C::ExecuteUbergraph_PrimalItemResource_CorruptedPolymer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_CorruptedPolymer.PrimalItemResource_CorruptedPolymer_C.ExecuteUbergraph_PrimalItemResource_CorruptedPolymer");

	UPrimalItemResource_CorruptedPolymer_C_ExecuteUbergraph_PrimalItemResource_CorruptedPolymer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
