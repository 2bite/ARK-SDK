#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoRex_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DodoRex_Character_BP.DodoRex_Character_BP_C
// 0x0030 (0x21B8 - 0x2188)
class ADodoRex_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_DodoRex_C*  DinoCharacterStatus_BP_DodoRex_C1;                        // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisappearInTime;                                          // 0x2190(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2194(0x0004) MISSED OFFSET
	TArray<class FString>                              EventTags;                                                // 0x2198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	struct FName                                       K2Node_Event_Key;                                         // 0x21A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UJsonObject*                                 K2Node_Event_JsonData;                                    // 0x21B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DodoRex_Character_BP.DodoRex_Character_BP_C");
		return ptr;
	}


	void RequestModData(const struct FName& Key, class UJsonObject** JsonData);
	void RequestModDataProcessing(const struct FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData);
	void UserConstructionScript();
	void SendModData(const struct FName& Key, class UJsonObject* JsonData);
	void ExecuteUbergraph_DodoRex_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
