// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Summoner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Summoner.DinoEntry_Summoner_C.ExecuteUbergraph_DinoEntry_Summoner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Summoner_C::ExecuteUbergraph_DinoEntry_Summoner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Summoner.DinoEntry_Summoner_C.ExecuteUbergraph_DinoEntry_Summoner");

	UDinoEntry_Summoner_C_ExecuteUbergraph_DinoEntry_Summoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
