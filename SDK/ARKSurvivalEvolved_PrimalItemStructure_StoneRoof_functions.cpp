// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StoneRoof_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StoneRoof.PrimalItemStructure_StoneRoof_C.ExecuteUbergraph_PrimalItemStructure_StoneRoof
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StoneRoof_C::ExecuteUbergraph_PrimalItemStructure_StoneRoof(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StoneRoof.PrimalItemStructure_StoneRoof_C.ExecuteUbergraph_PrimalItemStructure_StoneRoof");

	UPrimalItemStructure_StoneRoof_C_ExecuteUbergraph_PrimalItemStructure_StoneRoof_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
