// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Spino_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Spino_Bog.DinoColorSet_Spino_Bog_C.ExecuteUbergraph_DinoColorSet_Spino_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Spino_Bog_C::ExecuteUbergraph_DinoColorSet_Spino_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Spino_Bog.DinoColorSet_Spino_Bog_C.ExecuteUbergraph_DinoColorSet_Spino_Bog");

	UDinoColorSet_Spino_Bog_C_ExecuteUbergraph_DinoColorSet_Spino_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
