// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_RareMushroom_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_RareMushroom.PrimalItemResource_RareMushroom_C.ExecuteUbergraph_PrimalItemResource_RareMushroom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_RareMushroom_C::ExecuteUbergraph_PrimalItemResource_RareMushroom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_RareMushroom.PrimalItemResource_RareMushroom_C.ExecuteUbergraph_PrimalItemResource_RareMushroom");

	UPrimalItemResource_RareMushroom_C_ExecuteUbergraph_PrimalItemResource_RareMushroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
