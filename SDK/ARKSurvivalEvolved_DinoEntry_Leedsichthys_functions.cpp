// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Leedsichthys_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Leedsichthys.DinoEntry_Leedsichthys_C.ExecuteUbergraph_DinoEntry_Leedsichthys
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Leedsichthys_C::ExecuteUbergraph_DinoEntry_Leedsichthys(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Leedsichthys.DinoEntry_Leedsichthys_C.ExecuteUbergraph_DinoEntry_Leedsichthys");

	UDinoEntry_Leedsichthys_C_ExecuteUbergraph_DinoEntry_Leedsichthys_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
