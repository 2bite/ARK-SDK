// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophyGenericWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophyGenericWall.PrimalItemTrophyGenericWall_C.ExecuteUbergraph_PrimalItemTrophyGenericWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophyGenericWall_C::ExecuteUbergraph_PrimalItemTrophyGenericWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophyGenericWall.PrimalItemTrophyGenericWall_C.ExecuteUbergraph_PrimalItemTrophyGenericWall");

	UPrimalItemTrophyGenericWall_C_ExecuteUbergraph_PrimalItemTrophyGenericWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
