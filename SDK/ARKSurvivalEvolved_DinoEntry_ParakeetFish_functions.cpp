// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_ParakeetFish_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_ParakeetFish.DinoEntry_ParakeetFish_C.ExecuteUbergraph_DinoEntry_ParakeetFish
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_ParakeetFish_C::ExecuteUbergraph_DinoEntry_ParakeetFish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_ParakeetFish.DinoEntry_ParakeetFish_C.ExecuteUbergraph_DinoEntry_ParakeetFish");

	UDinoEntry_ParakeetFish_C_ExecuteUbergraph_DinoEntry_ParakeetFish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
